#ifndef _WMPLIB_H
#define _WMPLIB_H

#include <cviauto.h>

#ifdef __cplusplus
    extern "C" {
#endif
/* NICDBLD_BEGIN> Type Library Specific Types */

enum WMPLibEnum_WMPOpenState
{
	WMPLibConst_wmposUndefined = 0,
	WMPLibConst_wmposPlaylistChanging = 1,
	WMPLibConst_wmposPlaylistLocating = 2,
	WMPLibConst_wmposPlaylistConnecting = 3,
	WMPLibConst_wmposPlaylistLoading = 4,
	WMPLibConst_wmposPlaylistOpening = 5,
	WMPLibConst_wmposPlaylistOpenNoMedia = 6,
	WMPLibConst_wmposPlaylistChanged = 7,
	WMPLibConst_wmposMediaChanging = 8,
	WMPLibConst_wmposMediaLocating = 9,
	WMPLibConst_wmposMediaConnecting = 10,
	WMPLibConst_wmposMediaLoading = 11,
	WMPLibConst_wmposMediaOpening = 12,
	WMPLibConst_wmposMediaOpen = 13,
	WMPLibConst_wmposBeginCodecAcquisition = 14,
	WMPLibConst_wmposEndCodecAcquisition = 15,
	WMPLibConst_wmposBeginLicenseAcquisition = 16,
	WMPLibConst_wmposEndLicenseAcquisition = 17,
	WMPLibConst_wmposBeginIndividualization = 18,
	WMPLibConst_wmposEndIndividualization = 19,
	WMPLibConst_wmposMediaWaiting = 20,
	WMPLibConst_wmposOpeningUnknownURL = 21,
	_WMPLib_WMPOpenStateForceSizeToFourBytes = 0xFFFFFFFF
};
enum WMPLibEnum_WMPPlayState
{
	WMPLibConst_wmppsUndefined = 0,
	WMPLibConst_wmppsStopped = 1,
	WMPLibConst_wmppsPaused = 2,
	WMPLibConst_wmppsPlaying = 3,
	WMPLibConst_wmppsScanForward = 4,
	WMPLibConst_wmppsScanReverse = 5,
	WMPLibConst_wmppsBuffering = 6,
	WMPLibConst_wmppsWaiting = 7,
	WMPLibConst_wmppsMediaEnded = 8,
	WMPLibConst_wmppsTransitioning = 9,
	WMPLibConst_wmppsReady = 10,
	WMPLibConst_wmppsReconnecting = 11,
	WMPLibConst_wmppsLast = 12,
	_WMPLib_WMPPlayStateForceSizeToFourBytes = 0xFFFFFFFF
};
enum WMPLibEnum_WMPPlaylistChangeEventType
{
	WMPLibConst_wmplcUnknown = 0,
	WMPLibConst_wmplcClear = 1,
	WMPLibConst_wmplcInfoChange = 2,
	WMPLibConst_wmplcMove = 3,
	WMPLibConst_wmplcDelete = 4,
	WMPLibConst_wmplcInsert = 5,
	WMPLibConst_wmplcAppend = 6,
	WMPLibConst_wmplcPrivate = 7,
	WMPLibConst_wmplcNameChange = 8,
	WMPLibConst_wmplcMorph = 9,
	WMPLibConst_wmplcSort = 10,
	WMPLibConst_wmplcLast = 11,
	_WMPLib_WMPPlaylistChangeEventTypeForceSizeToFourBytes = 0xFFFFFFFF
};
enum WMPLibEnum_WMPDeviceStatus
{
	WMPLibConst_wmpdsUnknown = 0,
	WMPLibConst_wmpdsPartnershipExists = 1,
	WMPLibConst_wmpdsPartnershipDeclined = 2,
	WMPLibConst_wmpdsPartnershipAnother = 3,
	WMPLibConst_wmpdsManualDevice = 4,
	WMPLibConst_wmpdsNewDevice = 5,
	WMPLibConst_wmpdsLast = 6,
	_WMPLib_WMPDeviceStatusForceSizeToFourBytes = 0xFFFFFFFF
};
enum WMPLibEnum_WMPSyncState
{
	WMPLibConst_wmpssUnknown = 0,
	WMPLibConst_wmpssSynchronizing = 1,
	WMPLibConst_wmpssStopped = 2,
	WMPLibConst_wmpssEstimating = 3,
	WMPLibConst_wmpssLast = 4,
	_WMPLib_WMPSyncStateForceSizeToFourBytes = 0xFFFFFFFF
};
enum WMPLibEnum_WMPRipState
{
	WMPLibConst_wmprsUnknown = 0,
	WMPLibConst_wmprsRipping = 1,
	WMPLibConst_wmprsStopped = 2,
	_WMPLib_WMPRipStateForceSizeToFourBytes = 0xFFFFFFFF
};
enum WMPLibEnum_WMPBurnState
{
	WMPLibConst_wmpbsUnknown = 0,
	WMPLibConst_wmpbsBusy = 1,
	WMPLibConst_wmpbsReady = 2,
	WMPLibConst_wmpbsWaitingForDisc = 3,
	WMPLibConst_wmpbsRefreshStatusPending = 4,
	WMPLibConst_wmpbsPreparingToBurn = 5,
	WMPLibConst_wmpbsBurning = 6,
	WMPLibConst_wmpbsStopped = 7,
	WMPLibConst_wmpbsErasing = 8,
	WMPLibConst_wmpbsDownloading = 9,
	_WMPLib_WMPBurnStateForceSizeToFourBytes = 0xFFFFFFFF
};
enum WMPLibEnum_WMPFolderScanState
{
	WMPLibConst_wmpfssUnknown = 0,
	WMPLibConst_wmpfssScanning = 1,
	WMPLibConst_wmpfssUpdating = 2,
	WMPLibConst_wmpfssStopped = 3,
	_WMPLib_WMPFolderScanStateForceSizeToFourBytes = 0xFFFFFFFF
};
enum WMPLibEnum_WMPStringCollectionChangeEventType
{
	WMPLibConst_wmpsccetUnknown = 0,
	WMPLibConst_wmpsccetInsert = 1,
	WMPLibConst_wmpsccetChange = 2,
	WMPLibConst_wmpsccetDelete = 3,
	WMPLibConst_wmpsccetClear = 4,
	WMPLibConst_wmpsccetBeginUpdates = 5,
	WMPLibConst_wmpsccetEndUpdates = 6,
	_WMPLib_WMPStringCollectionChangeEventTypeForceSizeToFourBytes = 0xFFFFFFFF
};
enum WMPLibEnum_WMPBurnFormat
{
	WMPLibConst_wmpbfAudioCD = 0,
	WMPLibConst_wmpbfDataCD = 1,
	_WMPLib_WMPBurnFormatForceSizeToFourBytes = 0xFFFFFFFF
};
enum WMPLibEnum_WMPLibraryType
{
	WMPLibConst_wmpltUnknown = 0,
	WMPLibConst_wmpltAll = 1,
	WMPLibConst_wmpltLocal = 2,
	WMPLibConst_wmpltRemote = 3,
	WMPLibConst_wmpltDisc = 4,
	WMPLibConst_wmpltPortableDevice = 5,
	_WMPLib_WMPLibraryTypeForceSizeToFourBytes = 0xFFFFFFFF
};
enum WMPLibEnum_WMPSubscriptionDownloadState
{
	WMPLibConst_wmpsdlsDownloading = 0,
	WMPLibConst_wmpsdlsPaused = 1,
	WMPLibConst_wmpsdlsProcessing = 2,
	WMPLibConst_wmpsdlsCompleted = 3,
	WMPLibConst_wmpsdlsCancelled = 4,
	_WMPLib_WMPSubscriptionDownloadStateForceSizeToFourBytes = 0xFFFFFFFF
};
enum WMPLibEnum_WMP_WRITENAMESEX_TYPE
{
	WMPLibConst_WMP_WRITENAMES_TYPE_CD_BY_TOC = 0,
	WMPLibConst_WMP_WRITENAMES_TYPE_CD_BY_CONTENT_ID = 1,
	WMPLibConst_WMP_WRITENAMES_TYPE_CD_BY_MDQCD = 2,
	WMPLibConst_WMP_WRITENAMES_TYPE_DVD_BY_DVDID = 3,
	_WMPLib_WMP_WRITENAMESEX_TYPEForceSizeToFourBytes = 0xFFFFFFFF
};
typedef CAObjHandle WMPLibObj_IWMPControls;
typedef CAObjHandle WMPLibObj_IWMPSettings;
typedef CAObjHandle WMPLibObj_IWMPMedia;
typedef CAObjHandle WMPLibObj_IWMPMediaCollection;
typedef CAObjHandle WMPLibObj_IWMPPlaylistCollection;
typedef CAObjHandle WMPLibObj_IWMPNetwork;
typedef CAObjHandle WMPLibObj_IWMPPlaylist;
typedef CAObjHandle WMPLibObj_IWMPCdromCollection;
typedef CAObjHandle WMPLibObj_IWMPClosedCaption;
typedef CAObjHandle WMPLibObj_IWMPError;
typedef CAObjHandle WMPLibObj_IWMPDVD;
typedef CAObjHandle WMPLibObj_IWMPPlayerApplication;
typedef CAObjHandle WMPLibObj_IWMPStringCollection;
typedef CAObjHandle WMPLibObj_IWMPPlaylistArray;
typedef CAObjHandle WMPLibObj_IWMPCdrom;
typedef CAObjHandle WMPLibObj_IWMPErrorItem;
typedef CAObjHandle WMPLibObj_IWMPQuery;
typedef CAObjHandle WMPLibObj_IWMPStringCollection2;
typedef LPUNKNOWN WMPLibType_IWMPSyncDevice;
typedef LPUNKNOWN WMPLibType_IWMPCdromRip;
typedef LPUNKNOWN WMPLibType_IWMPCdromBurn;
typedef LPUNKNOWN WMPLibType_IWMPLibrary;
typedef CAObjHandle WMPLibObj_IWMPSyncDevice;
typedef CAObjHandle WMPLibObj_IWMPCdromRip;
typedef CAObjHandle WMPLibObj_IWMPCdromBurn;
typedef CAObjHandle WMPLibObj_IWMPLibrary;
typedef CAObjHandle WMPLibObj_IWMPPlaylist;
typedef CAObjHandle WMPLibObj_IWMPMediaCollection;
typedef unsigned long WMPLibType_ULONG_PTR;
typedef CAObjHandle WMPLibObj_IWMPDownloadManager;
typedef CAObjHandle WMPLibObj_IWMPDownloadCollection;
typedef CAObjHandle WMPLibObj_IWMPDownloadItem2;
typedef HRESULT (CVICALLBACK *_WMPOCXEventsRegOnOpenStateChange_CallbackType) (CAObjHandle caServerObjHandle,
                                                                               void *caCallbackData,
                                                                               long  newState);
typedef HRESULT (CVICALLBACK *_WMPOCXEventsRegOnPlayStateChange_CallbackType) (CAObjHandle caServerObjHandle,
                                                                               void *caCallbackData,
                                                                               long  newState);
typedef HRESULT (CVICALLBACK *_WMPOCXEventsRegOnAudioLanguageChange_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                   void *caCallbackData,
                                                                                   long  langID);
typedef HRESULT (CVICALLBACK *_WMPOCXEventsRegOnStatusChange_CallbackType) (CAObjHandle caServerObjHandle,
                                                                            void *caCallbackData);
typedef HRESULT (CVICALLBACK *_WMPOCXEventsRegOnScriptCommand_CallbackType) (CAObjHandle caServerObjHandle,
                                                                             void *caCallbackData,
                                                                             char *scType,
                                                                             char *param);
typedef HRESULT (CVICALLBACK *_WMPOCXEventsRegOnNewStream_CallbackType) (CAObjHandle caServerObjHandle,
                                                                         void *caCallbackData);
typedef HRESULT (CVICALLBACK *_WMPOCXEventsRegOnDisconnect_CallbackType) (CAObjHandle caServerObjHandle,
                                                                          void *caCallbackData,
                                                                          long  result);
typedef HRESULT (CVICALLBACK *_WMPOCXEventsRegOnBuffering_CallbackType) (CAObjHandle caServerObjHandle,
                                                                         void *caCallbackData,
                                                                         VBOOL  start);
typedef HRESULT (CVICALLBACK *_WMPOCXEventsRegOnError_CallbackType) (CAObjHandle caServerObjHandle,
                                                                     void *caCallbackData);
typedef HRESULT (CVICALLBACK *_WMPOCXEventsRegOnWarning_CallbackType) (CAObjHandle caServerObjHandle,
                                                                       void *caCallbackData,
                                                                       long  warningType,
                                                                       long  param,
                                                                       char *description);
typedef HRESULT (CVICALLBACK *_WMPOCXEventsRegOnEndOfStream_CallbackType) (CAObjHandle caServerObjHandle,
                                                                           void *caCallbackData,
                                                                           long  result);
typedef HRESULT (CVICALLBACK *_WMPOCXEventsRegOnPositionChange_CallbackType) (CAObjHandle caServerObjHandle,
                                                                              void *caCallbackData,
                                                                              double  oldPosition,
                                                                              double  newPosition);
typedef HRESULT (CVICALLBACK *_WMPOCXEventsRegOnMarkerHit_CallbackType) (CAObjHandle caServerObjHandle,
                                                                         void *caCallbackData,
                                                                         long  markerNum);
typedef HRESULT (CVICALLBACK *_WMPOCXEventsRegOnDurationUnitChange_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                  void *caCallbackData,
                                                                                  long  newDurationUnit);
typedef HRESULT (CVICALLBACK *_WMPOCXEventsRegOnCdromMediaChange_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                void *caCallbackData,
                                                                                long  cdromNum);
typedef HRESULT (CVICALLBACK *_WMPOCXEventsRegOnPlaylistChange_CallbackType) (CAObjHandle caServerObjHandle,
                                                                              void *caCallbackData,
                                                                              CAObjHandle  playlist,
                                                                              enum WMPLibEnum_WMPPlaylistChangeEventType  change);
typedef HRESULT (CVICALLBACK *_WMPOCXEventsRegOnCurrentPlaylistChange_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                     void *caCallbackData,
                                                                                     enum WMPLibEnum_WMPPlaylistChangeEventType  change);
typedef HRESULT (CVICALLBACK *_WMPOCXEventsRegOnCurrentPlaylistItemAvailable_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                            void *caCallbackData,
                                                                                            char *bstrItemName);
typedef HRESULT (CVICALLBACK *_WMPOCXEventsRegOnMediaChange_CallbackType) (CAObjHandle caServerObjHandle,
                                                                           void *caCallbackData,
                                                                           CAObjHandle  item);
typedef HRESULT (CVICALLBACK *_WMPOCXEventsRegOnCurrentMediaItemAvailable_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                         void *caCallbackData,
                                                                                         char *bstrItemName);
typedef HRESULT (CVICALLBACK *_WMPOCXEventsRegOnCurrentItemChange_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                 void *caCallbackData,
                                                                                 CAObjHandle  pdispMedia);
typedef HRESULT (CVICALLBACK *_WMPOCXEventsRegOnMediaCollectionChange_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                     void *caCallbackData);
typedef HRESULT (CVICALLBACK *_WMPOCXEventsRegOnMediaCollectionAttributeStringAdded_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                                   void *caCallbackData,
                                                                                                   char *bstrAttribName,
                                                                                                   char *bstrAttribVal);
typedef HRESULT (CVICALLBACK *_WMPOCXEventsRegOnMediaCollectionAttributeStringRemoved_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                                     void *caCallbackData,
                                                                                                     char *bstrAttribName,
                                                                                                     char *bstrAttribVal);
typedef HRESULT (CVICALLBACK *_WMPOCXEventsRegOnMediaCollectionAttributeStringChanged_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                                     void *caCallbackData,
                                                                                                     char *bstrAttribName,
                                                                                                     char *bstrOldAttribVal,
                                                                                                     char *bstrNewAttribVal);
typedef HRESULT (CVICALLBACK *_WMPOCXEventsRegOnPlaylistCollectionChange_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                        void *caCallbackData);
typedef HRESULT (CVICALLBACK *_WMPOCXEventsRegOnPlaylistCollectionPlaylistAdded_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                               void *caCallbackData,
                                                                                               char *bstrPlaylistName);
typedef HRESULT (CVICALLBACK *_WMPOCXEventsRegOnPlaylistCollectionPlaylistRemoved_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                                 void *caCallbackData,
                                                                                                 char *bstrPlaylistName);
typedef HRESULT (CVICALLBACK *_WMPOCXEventsRegOnPlaylistCollectionPlaylistSetAsDeleted_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                                      void *caCallbackData,
                                                                                                      char *bstrPlaylistName,
                                                                                                      VBOOL  varfIsDeleted);
typedef HRESULT (CVICALLBACK *_WMPOCXEventsRegOnModeChange_CallbackType) (CAObjHandle caServerObjHandle,
                                                                          void *caCallbackData,
                                                                          char *modeName,
                                                                          VBOOL  newValue);
typedef HRESULT (CVICALLBACK *_WMPOCXEventsRegOnMediaError_CallbackType) (CAObjHandle caServerObjHandle,
                                                                          void *caCallbackData,
                                                                          CAObjHandle  pMediaObject);
typedef HRESULT (CVICALLBACK *_WMPOCXEventsRegOnOpenPlaylistSwitch_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                  void *caCallbackData,
                                                                                  CAObjHandle  pItem);
typedef HRESULT (CVICALLBACK *_WMPOCXEventsRegOnDomainChange_CallbackType) (CAObjHandle caServerObjHandle,
                                                                            void *caCallbackData,
                                                                            char *strDomain);
typedef HRESULT (CVICALLBACK *_WMPOCXEventsRegOnSwitchedToPlayerApplication_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                           void *caCallbackData);
typedef HRESULT (CVICALLBACK *_WMPOCXEventsRegOnSwitchedToControl_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                 void *caCallbackData);
typedef HRESULT (CVICALLBACK *_WMPOCXEventsRegOnPlayerDockedStateChange_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                       void *caCallbackData);
typedef HRESULT (CVICALLBACK *_WMPOCXEventsRegOnPlayerReconnect_CallbackType) (CAObjHandle caServerObjHandle,
                                                                               void *caCallbackData);
typedef HRESULT (CVICALLBACK *_WMPOCXEventsRegOnClick_CallbackType) (CAObjHandle caServerObjHandle,
                                                                     void *caCallbackData,
                                                                     short  nButton,
                                                                     short  nShiftState,
                                                                     long  fX,
                                                                     long  fY);
typedef HRESULT (CVICALLBACK *_WMPOCXEventsRegOnDoubleClick_CallbackType) (CAObjHandle caServerObjHandle,
                                                                           void *caCallbackData,
                                                                           short  nButton,
                                                                           short  nShiftState,
                                                                           long  fX,
                                                                           long  fY);
typedef HRESULT (CVICALLBACK *_WMPOCXEventsRegOnKeyDown_CallbackType) (CAObjHandle caServerObjHandle,
                                                                       void *caCallbackData,
                                                                       short  nKeyCode,
                                                                       short  nShiftState);
typedef HRESULT (CVICALLBACK *_WMPOCXEventsRegOnKeyPress_CallbackType) (CAObjHandle caServerObjHandle,
                                                                        void *caCallbackData,
                                                                        short  nKeyAscii);
typedef HRESULT (CVICALLBACK *_WMPOCXEventsRegOnKeyUp_CallbackType) (CAObjHandle caServerObjHandle,
                                                                     void *caCallbackData,
                                                                     short  nKeyCode,
                                                                     short  nShiftState);
typedef HRESULT (CVICALLBACK *_WMPOCXEventsRegOnMouseDown_CallbackType) (CAObjHandle caServerObjHandle,
                                                                         void *caCallbackData,
                                                                         short  nButton,
                                                                         short  nShiftState,
                                                                         long  fX,
                                                                         long  fY);
typedef HRESULT (CVICALLBACK *_WMPOCXEventsRegOnMouseMove_CallbackType) (CAObjHandle caServerObjHandle,
                                                                         void *caCallbackData,
                                                                         short  nButton,
                                                                         short  nShiftState,
                                                                         long  fX,
                                                                         long  fY);
typedef HRESULT (CVICALLBACK *_WMPOCXEventsRegOnMouseUp_CallbackType) (CAObjHandle caServerObjHandle,
                                                                       void *caCallbackData,
                                                                       short  nButton,
                                                                       short  nShiftState,
                                                                       long  fX,
                                                                       long  fY);
typedef HRESULT (CVICALLBACK *_WMPOCXEventsRegOnDeviceConnect_CallbackType) (CAObjHandle caServerObjHandle,
                                                                             void *caCallbackData,
                                                                             WMPLibType_IWMPSyncDevice  pDevice);
typedef HRESULT (CVICALLBACK *_WMPOCXEventsRegOnDeviceDisconnect_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                void *caCallbackData,
                                                                                WMPLibType_IWMPSyncDevice  pDevice);
typedef HRESULT (CVICALLBACK *_WMPOCXEventsRegOnDeviceStatusChange_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                  void *caCallbackData,
                                                                                  WMPLibType_IWMPSyncDevice  pDevice,
                                                                                  enum WMPLibEnum_WMPDeviceStatus  newStatus);
typedef HRESULT (CVICALLBACK *_WMPOCXEventsRegOnDeviceSyncStateChange_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                     void *caCallbackData,
                                                                                     WMPLibType_IWMPSyncDevice  pDevice,
                                                                                     enum WMPLibEnum_WMPSyncState  newState);
typedef HRESULT (CVICALLBACK *_WMPOCXEventsRegOnDeviceSyncError_CallbackType) (CAObjHandle caServerObjHandle,
                                                                               void *caCallbackData,
                                                                               WMPLibType_IWMPSyncDevice  pDevice,
                                                                               CAObjHandle  pMedia);
typedef HRESULT (CVICALLBACK *_WMPOCXEventsRegOnCreatePartnershipComplete_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                         void *caCallbackData,
                                                                                         WMPLibType_IWMPSyncDevice  pDevice,
                                                                                         long  hrResult);
typedef HRESULT (CVICALLBACK *_WMPOCXEventsRegOnCdromRipStateChange_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                   void *caCallbackData,
                                                                                   WMPLibType_IWMPCdromRip  pCdromRip,
                                                                                   enum WMPLibEnum_WMPRipState  wmprs);
typedef HRESULT (CVICALLBACK *_WMPOCXEventsRegOnCdromRipMediaError_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                  void *caCallbackData,
                                                                                  WMPLibType_IWMPCdromRip  pCdromRip,
                                                                                  CAObjHandle  pMedia);
typedef HRESULT (CVICALLBACK *_WMPOCXEventsRegOnCdromBurnStateChange_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                    void *caCallbackData,
                                                                                    WMPLibType_IWMPCdromBurn  pCdromBurn,
                                                                                    enum WMPLibEnum_WMPBurnState  wmpbs);
typedef HRESULT (CVICALLBACK *_WMPOCXEventsRegOnCdromBurnMediaError_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                   void *caCallbackData,
                                                                                   WMPLibType_IWMPCdromBurn  pCdromBurn,
                                                                                   CAObjHandle  pMedia);
typedef HRESULT (CVICALLBACK *_WMPOCXEventsRegOnCdromBurnError_CallbackType) (CAObjHandle caServerObjHandle,
                                                                              void *caCallbackData,
                                                                              WMPLibType_IWMPCdromBurn  pCdromBurn,
                                                                              long  hrError);
typedef HRESULT (CVICALLBACK *_WMPOCXEventsRegOnLibraryConnect_CallbackType) (CAObjHandle caServerObjHandle,
                                                                              void *caCallbackData,
                                                                              WMPLibType_IWMPLibrary  pLibrary);
typedef HRESULT (CVICALLBACK *_WMPOCXEventsRegOnLibraryDisconnect_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                 void *caCallbackData,
                                                                                 WMPLibType_IWMPLibrary  pLibrary);
typedef HRESULT (CVICALLBACK *_WMPOCXEventsRegOnFolderScanStateChange_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                     void *caCallbackData,
                                                                                     enum WMPLibEnum_WMPFolderScanState  wmpfss);
typedef HRESULT (CVICALLBACK *_WMPOCXEventsRegOnStringCollectionChange_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                      void *caCallbackData,
                                                                                      CAObjHandle  pdispStringCollection,
                                                                                      enum WMPLibEnum_WMPStringCollectionChangeEventType  change,
                                                                                      long  lCollectionIndex);
typedef HRESULT (CVICALLBACK *_WMPOCXEventsRegOnMediaCollectionMediaAdded_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                         void *caCallbackData,
                                                                                         CAObjHandle  pdispMedia);
typedef HRESULT (CVICALLBACK *_WMPOCXEventsRegOnMediaCollectionMediaRemoved_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                           void *caCallbackData,
                                                                                           CAObjHandle  pdispMedia);
typedef HRESULT (CVICALLBACK *IWMPButtonCtrlEventsRegOnonclick_CallbackType) (CAObjHandle caServerObjHandle,
                                                                              void *caCallbackData,
                                                                              long *__returnValue);
typedef HRESULT (CVICALLBACK *IWMPSliderCtrlEventsRegOnondragbegin_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                  void *caCallbackData,
                                                                                  long *__returnValue);
typedef HRESULT (CVICALLBACK *IWMPSliderCtrlEventsRegOnondragend_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                void *caCallbackData,
                                                                                long *__returnValue);
typedef HRESULT (CVICALLBACK *IWMPSliderCtrlEventsRegOnonpositionchange_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                       void *caCallbackData,
                                                                                       long *__returnValue);
typedef HRESULT (CVICALLBACK *IWMPVideoCtrlEventsRegOnonvideostart_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                  void *caCallbackData,
                                                                                  long *__returnValue);
typedef HRESULT (CVICALLBACK *IWMPVideoCtrlEventsRegOnonvideoend_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                void *caCallbackData,
                                                                                long *__returnValue);
typedef HRESULT (CVICALLBACK *IWMPRegionalButtonEventsRegOnonblur_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                 void *caCallbackData,
                                                                                 long *__returnValue);
typedef HRESULT (CVICALLBACK *IWMPRegionalButtonEventsRegOnonfocus_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                  void *caCallbackData,
                                                                                  long *__returnValue);
typedef HRESULT (CVICALLBACK *IWMPRegionalButtonEventsRegOnonclick_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                  void *caCallbackData,
                                                                                  long *__returnValue);
typedef HRESULT (CVICALLBACK *IWMPRegionalButtonEventsRegOnondblclick_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                     void *caCallbackData,
                                                                                     long *__returnValue);
typedef HRESULT (CVICALLBACK *IWMPRegionalButtonEventsRegOnonmousedown_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                      void *caCallbackData,
                                                                                      long *__returnValue);
typedef HRESULT (CVICALLBACK *IWMPRegionalButtonEventsRegOnonmouseup_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                    void *caCallbackData,
                                                                                    long *__returnValue);
typedef HRESULT (CVICALLBACK *IWMPRegionalButtonEventsRegOnonmousemove_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                      void *caCallbackData,
                                                                                      long *__returnValue);
typedef HRESULT (CVICALLBACK *IWMPRegionalButtonEventsRegOnonmouseover_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                      void *caCallbackData,
                                                                                      long *__returnValue);
typedef HRESULT (CVICALLBACK *IWMPRegionalButtonEventsRegOnonmouseout_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                     void *caCallbackData,
                                                                                     long *__returnValue);
typedef HRESULT (CVICALLBACK *IWMPRegionalButtonEventsRegOnonkeypress_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                     void *caCallbackData,
                                                                                     long *__returnValue);
typedef HRESULT (CVICALLBACK *IWMPRegionalButtonEventsRegOnonkeydown_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                    void *caCallbackData,
                                                                                    long *__returnValue);
typedef HRESULT (CVICALLBACK *IWMPRegionalButtonEventsRegOnonkeyup_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                  void *caCallbackData,
                                                                                  long *__returnValue);
typedef HRESULT (CVICALLBACK *IWMPCustomSliderCtrlEventsRegOnondragbegin_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                        void *caCallbackData,
                                                                                        long *__returnValue);
typedef HRESULT (CVICALLBACK *IWMPCustomSliderCtrlEventsRegOnondragend_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                      void *caCallbackData,
                                                                                      long *__returnValue);
typedef HRESULT (CVICALLBACK *IWMPCustomSliderCtrlEventsRegOnonpositionchange_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                             void *caCallbackData,
                                                                                             long *__returnValue);
typedef HRESULT (CVICALLBACK *_WMPCoreEventsRegOnOpenStateChange_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                void *caCallbackData,
                                                                                long  newState);
typedef HRESULT (CVICALLBACK *_WMPCoreEventsRegOnPlayStateChange_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                void *caCallbackData,
                                                                                long  newState);
typedef HRESULT (CVICALLBACK *_WMPCoreEventsRegOnAudioLanguageChange_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                    void *caCallbackData,
                                                                                    long  langID);
typedef HRESULT (CVICALLBACK *_WMPCoreEventsRegOnStatusChange_CallbackType) (CAObjHandle caServerObjHandle,
                                                                             void *caCallbackData);
typedef HRESULT (CVICALLBACK *_WMPCoreEventsRegOnScriptCommand_CallbackType) (CAObjHandle caServerObjHandle,
                                                                              void *caCallbackData,
                                                                              char *scType,
                                                                              char *param);
typedef HRESULT (CVICALLBACK *_WMPCoreEventsRegOnNewStream_CallbackType) (CAObjHandle caServerObjHandle,
                                                                          void *caCallbackData);
typedef HRESULT (CVICALLBACK *_WMPCoreEventsRegOnDisconnect_CallbackType) (CAObjHandle caServerObjHandle,
                                                                           void *caCallbackData,
                                                                           long  result);
typedef HRESULT (CVICALLBACK *_WMPCoreEventsRegOnBuffering_CallbackType) (CAObjHandle caServerObjHandle,
                                                                          void *caCallbackData,
                                                                          VBOOL  start);
typedef HRESULT (CVICALLBACK *_WMPCoreEventsRegOnError_CallbackType) (CAObjHandle caServerObjHandle,
                                                                      void *caCallbackData);
typedef HRESULT (CVICALLBACK *_WMPCoreEventsRegOnWarning_CallbackType) (CAObjHandle caServerObjHandle,
                                                                        void *caCallbackData,
                                                                        long  warningType,
                                                                        long  param,
                                                                        char *description);
typedef HRESULT (CVICALLBACK *_WMPCoreEventsRegOnEndOfStream_CallbackType) (CAObjHandle caServerObjHandle,
                                                                            void *caCallbackData,
                                                                            long  result);
typedef HRESULT (CVICALLBACK *_WMPCoreEventsRegOnPositionChange_CallbackType) (CAObjHandle caServerObjHandle,
                                                                               void *caCallbackData,
                                                                               double  oldPosition,
                                                                               double  newPosition);
typedef HRESULT (CVICALLBACK *_WMPCoreEventsRegOnMarkerHit_CallbackType) (CAObjHandle caServerObjHandle,
                                                                          void *caCallbackData,
                                                                          long  markerNum);
typedef HRESULT (CVICALLBACK *_WMPCoreEventsRegOnDurationUnitChange_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                   void *caCallbackData,
                                                                                   long  newDurationUnit);
typedef HRESULT (CVICALLBACK *_WMPCoreEventsRegOnCdromMediaChange_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                 void *caCallbackData,
                                                                                 long  cdromNum);
typedef HRESULT (CVICALLBACK *_WMPCoreEventsRegOnPlaylistChange_CallbackType) (CAObjHandle caServerObjHandle,
                                                                               void *caCallbackData,
                                                                               CAObjHandle  playlist,
                                                                               enum WMPLibEnum_WMPPlaylistChangeEventType  change);
typedef HRESULT (CVICALLBACK *_WMPCoreEventsRegOnCurrentPlaylistChange_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                      void *caCallbackData,
                                                                                      enum WMPLibEnum_WMPPlaylistChangeEventType  change);
typedef HRESULT (CVICALLBACK *_WMPCoreEventsRegOnCurrentPlaylistItemAvailable_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                             void *caCallbackData,
                                                                                             char *bstrItemName);
typedef HRESULT (CVICALLBACK *_WMPCoreEventsRegOnMediaChange_CallbackType) (CAObjHandle caServerObjHandle,
                                                                            void *caCallbackData,
                                                                            CAObjHandle  item);
typedef HRESULT (CVICALLBACK *_WMPCoreEventsRegOnCurrentMediaItemAvailable_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                          void *caCallbackData,
                                                                                          char *bstrItemName);
typedef HRESULT (CVICALLBACK *_WMPCoreEventsRegOnCurrentItemChange_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                  void *caCallbackData,
                                                                                  CAObjHandle  pdispMedia);
typedef HRESULT (CVICALLBACK *_WMPCoreEventsRegOnMediaCollectionChange_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                      void *caCallbackData);
typedef HRESULT (CVICALLBACK *_WMPCoreEventsRegOnMediaCollectionAttributeStringAdded_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                                    void *caCallbackData,
                                                                                                    char *bstrAttribName,
                                                                                                    char *bstrAttribVal);
typedef HRESULT (CVICALLBACK *_WMPCoreEventsRegOnMediaCollectionAttributeStringRemoved_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                                      void *caCallbackData,
                                                                                                      char *bstrAttribName,
                                                                                                      char *bstrAttribVal);
typedef HRESULT (CVICALLBACK *_WMPCoreEventsRegOnMediaCollectionAttributeStringChanged_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                                      void *caCallbackData,
                                                                                                      char *bstrAttribName,
                                                                                                      char *bstrOldAttribVal,
                                                                                                      char *bstrNewAttribVal);
typedef HRESULT (CVICALLBACK *_WMPCoreEventsRegOnPlaylistCollectionChange_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                         void *caCallbackData);
typedef HRESULT (CVICALLBACK *_WMPCoreEventsRegOnPlaylistCollectionPlaylistAdded_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                                void *caCallbackData,
                                                                                                char *bstrPlaylistName);
typedef HRESULT (CVICALLBACK *_WMPCoreEventsRegOnPlaylistCollectionPlaylistRemoved_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                                  void *caCallbackData,
                                                                                                  char *bstrPlaylistName);
typedef HRESULT (CVICALLBACK *_WMPCoreEventsRegOnPlaylistCollectionPlaylistSetAsDeleted_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                                       void *caCallbackData,
                                                                                                       char *bstrPlaylistName,
                                                                                                       VBOOL  varfIsDeleted);
typedef HRESULT (CVICALLBACK *_WMPCoreEventsRegOnModeChange_CallbackType) (CAObjHandle caServerObjHandle,
                                                                           void *caCallbackData,
                                                                           char *modeName,
                                                                           VBOOL  newValue);
typedef HRESULT (CVICALLBACK *_WMPCoreEventsRegOnMediaError_CallbackType) (CAObjHandle caServerObjHandle,
                                                                           void *caCallbackData,
                                                                           CAObjHandle  pMediaObject);
typedef HRESULT (CVICALLBACK *_WMPCoreEventsRegOnOpenPlaylistSwitch_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                   void *caCallbackData,
                                                                                   CAObjHandle  pItem);
typedef HRESULT (CVICALLBACK *_WMPCoreEventsRegOnDomainChange_CallbackType) (CAObjHandle caServerObjHandle,
                                                                             void *caCallbackData,
                                                                             char *strDomain);
typedef HRESULT (CVICALLBACK *_WMPCoreEventsRegOnStringCollectionChange_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                       void *caCallbackData,
                                                                                       CAObjHandle  pdispStringCollection,
                                                                                       enum WMPLibEnum_WMPStringCollectionChangeEventType  change,
                                                                                       long  lCollectionIndex);
typedef HRESULT (CVICALLBACK *_WMPCoreEventsRegOnMediaCollectionMediaAdded_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                          void *caCallbackData,
                                                                                          CAObjHandle  pdispMedia);
typedef HRESULT (CVICALLBACK *_WMPCoreEventsRegOnMediaCollectionMediaRemoved_CallbackType) (CAObjHandle caServerObjHandle,
                                                                                            void *caCallbackData,
                                                                                            CAObjHandle  pdispMedia);
/* NICDBLD_END> Type Library Specific Types */

extern const IID WMPLib_IID_IWMPPlayer4;
extern const IID WMPLib_IID_IWMPPlayer3;
extern const IID WMPLib_IID_IWMPPlayer2;
extern const IID WMPLib_IID_IWMPPlayer;
extern const IID WMPLib_IID_IWMPControls;
extern const IID WMPLib_IID_IWMPSettings;
extern const IID WMPLib_IID_IWMPPlaylist;
extern const IID WMPLib_IID_IWMPMedia;
extern const IID WMPLib_IID_IWMPMediaCollection;
extern const IID WMPLib_IID_IWMPPlaylistCollection;
extern const IID WMPLib_IID_IWMPCdromCollection;
extern const IID WMPLib_IID_IWMPError;
extern const IID WMPLib_IID_IWMPErrorItem;
extern const IID WMPLib_IID_IWMPErrorItem2;
extern const IID WMPLib_IID_IWMPClosedCaption;
extern const IID WMPLib_IID_IWMPDVD;
extern const IID WMPLib_IID_IWMPControls2;
extern const IID WMPLib_IID_IWMPMedia2;
extern const IID WMPLib_IID_IWMPMedia3;
extern const IID WMPLib_IID_IWMPMetadataPicture;
extern const IID WMPLib_IID_IWMPMetadataText;
extern const IID WMPLib_IID_IWMPSettings2;
extern const IID WMPLib_IID_IWMPControls3;
extern const IID WMPLib_IID_IWMPClosedCaption2;
extern const IID WMPLib_IID_IWMPMediaCollection2;
extern const IID WMPLib_IID_IWMPStringCollection2;
extern const IID WMPLib_IID__WMPOCXEvents;
extern const IID WMPLib_IID_IWMPButtonCtrlEvents;
extern const IID WMPLib_IID_IWMPSliderCtrlEvents;
extern const IID WMPLib_IID_IWMPVideoCtrlEvents;
extern const IID WMPLib_IID_IWMPRegionalButtonEvents;
extern const IID WMPLib_IID_IWMPCustomSliderCtrlEvents;
extern const IID WMPLib_IID__WMPCoreEvents;
extern const IID WMPLib_IID_IWMPButtonCtrl;
extern const IID WMPLib_IID_IWMPListBoxCtrl;
extern const IID WMPLib_IID_IWMPSliderCtrl;
extern const IID WMPLib_IID_IWMPVideoCtrl;
extern const IID WMPLib_IID_IWMPEffectsCtrl;
extern const IID WMPLib_IID_IWMPEqualizerSettingsCtrl;
extern const IID WMPLib_IID_IWMPVideoSettingsCtrl;
extern const IID WMPLib_IID_IWMPLibraryTreeCtrl;
extern const IID WMPLib_IID_IWMPEditCtrl;
extern const IID WMPLib_IID_IWMPSkinList;
extern const IID WMPLib_IID_IWMPMenuCtrl;
extern const IID WMPLib_IID_IWMPAutoMenuCtrl;
extern const IID WMPLib_IID_IWMPRegionalButtonCtrl;
extern const IID WMPLib_IID_IWMPRegionalButton;
extern const IID WMPLib_IID_IWMPCustomSlider;
extern const IID WMPLib_IID_IWMPTextCtrl;
extern const IID WMPLib_IID_IWMPPlaylistCtrl;
extern const IID WMPLib_IID_IWMPCore3;
extern const IID WMPLib_IID_IWMPCore2;
extern const IID WMPLib_IID_IWMPCore;
extern const IID WMPLib_IID_IWMPStringCollection;
extern const IID WMPLib_IID_IWMPCdrom;
extern const IID WMPLib_IID_IWMPEvents;
extern const IID WMPLib_IID_IWMPEvents2;
extern const IID WMPLib_IID_IWMPSyncDevice;
extern const IID WMPLib_IID_IWMPEvents3;
extern const IID WMPLib_IID_IWMPCdromRip;
extern const IID WMPLib_IID_IWMPCdromBurn;
extern const IID WMPLib_IID_IWMPLibrary;
extern const IID WMPLib_IID_IWMPEvents4;
extern const IID WMPLib_IID_IWMPPlaylistArray;
extern const IID WMPLib_IID_IWMPNetwork;
extern const IID WMPLib_IID_IWMPPlayerApplication;
extern const IID WMPLib_IID_IWMPQuery;
extern const IID WMPLib_IID_IWMPPlayerServices;
extern const IID WMPLib_IID_IWMPPlayerServices2;
extern const IID WMPLib_IID_IWMPRemoteMediaServices;
extern const IID WMPLib_IID_IWMPSyncServices;
extern const IID WMPLib_IID_IWMPLibraryServices;
extern const IID WMPLib_IID_IWMPLibrarySharingServices;
extern const IID WMPLib_IID_IWMPLibrary2;
extern const IID WMPLib_IID_IWMPFolderMonitorServices;
extern const IID WMPLib_IID_IWMPSyncDevice2;
extern const IID WMPLib_IID_IWMPSyncDevice3;
extern const IID WMPLib_IID_IAppDispatch;
extern const IID WMPLib_IID_IWMPSafeBrowser;
extern const IID WMPLib_IID_IWMPObjectExtendedProps;
extern const IID WMPLib_IID_IWMPLayoutSubView;
extern const IID WMPLib_IID_IWMPLayoutView;
extern const IID WMPLib_IID_IWMPEventObject;
extern const IID WMPLib_IID_IWMPTheme;
extern const IID WMPLib_IID_IWMPLayoutSettingsDispatch;
extern const IID WMPLib_IID_IWMPWindow;
extern const IID WMPLib_IID_IWMPBrandDispatch;
extern const IID WMPLib_IID_IWMPNowPlayingHelperDispatch;
extern const IID WMPLib_IID_IWMPNowDoingDispatch;
extern const IID WMPLib_IID_IWMPHoverPreviewDispatch;
extern const IID WMPLib_IID_IWMPListBoxItem;
extern const IID WMPLib_IID_IWMPPlaylistCtrlColumn;
extern const IID WMPLib_IID_IWMPPluginUIHost;
extern const IID WMPLib_IID_ITaskCntrCtrl;
extern const IID WMPLib_IID_IWMPGraphEventHandler;
extern const IID WMPLib_IID_IBattery;
extern const IID WMPLib_IID_IBatteryPreset;
extern const IID WMPLib_IID_IBatteryRandomPreset;
extern const IID WMPLib_IID_IBatterySavedPreset;
extern const IID WMPLib_IID_IBarsEffect;
extern const IID WMPLib_IID_IWMPExternal;
extern const IID WMPLib_IID_IWMPExternalColors;
extern const IID WMPLib_IID_IWMPSubscriptionServiceLimited;
extern const IID WMPLib_IID_IWMPSubscriptionServiceExternal;
extern const IID WMPLib_IID_IWMPDownloadManager;
extern const IID WMPLib_IID_IWMPDownloadCollection;
extern const IID WMPLib_IID_IWMPDownloadItem2;
extern const IID WMPLib_IID_IWMPDownloadItem;
extern const IID WMPLib_IID_IWMPSubscriptionServicePlayMedia;
extern const IID WMPLib_IID_IWMPDiscoExternal;
extern const IID WMPLib_IID_IWMPCDDVDWizardExternal;
extern const IID WMPLib_IID_IWMPBaseExternal;
extern const IID WMPLib_IID_IWMPOfflineExternal;
extern const IID WMPLib_IID_IWMPDMRAVTransportService;
extern const IID WMPLib_IID_IWMPDMRConnectionManagerService;
extern const IID WMPLib_IID_IWMPDMRRenderingControlService;

HRESULT CVIFUNC WMPLib_NewIWMPPlayer4 (int panel, const char *label, int top,
                                       int left, int *controlID, int *UILError);

HRESULT CVIFUNC WMPLib_OpenIWMPPlayer4 (const char *fileName, int panel,
                                        const char *label, int top, int left,
                                        int *controlID, int *UILError);

HRESULT CVIFUNC WMPLib_IWMPPlayer4close (CAObjHandle objectHandle,
                                         ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPPlayer4GetURL (CAObjHandle objectHandle,
                                          ERRORINFO *errorInfo, char **pbstrURL);

HRESULT CVIFUNC WMPLib_IWMPPlayer4SetURL (CAObjHandle objectHandle,
                                          ERRORINFO *errorInfo,
                                          const char *pbstrURL);

HRESULT CVIFUNC WMPLib_IWMPPlayer4GetopenState (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                enum WMPLibEnum_WMPOpenState *pwmpos);

HRESULT CVIFUNC WMPLib_IWMPPlayer4GetplayState (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                enum WMPLibEnum_WMPPlayState *pwmpps);

HRESULT CVIFUNC WMPLib_IWMPPlayer4Getcontrols (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo,
                                               WMPLibObj_IWMPControls *ppControl);

HRESULT CVIFUNC WMPLib_IWMPPlayer4Getsettings (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo,
                                               WMPLibObj_IWMPSettings *ppSettings);

HRESULT CVIFUNC WMPLib_IWMPPlayer4GetcurrentMedia (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   WMPLibObj_IWMPMedia *ppMedia);

HRESULT CVIFUNC WMPLib_IWMPPlayer4SetcurrentMedia (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   WMPLibObj_IWMPMedia ppMedia);

HRESULT CVIFUNC WMPLib_IWMPPlayer4GetmediaCollection (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      WMPLibObj_IWMPMediaCollection *ppMediaCollection);

HRESULT CVIFUNC WMPLib_IWMPPlayer4GetplaylistCollection (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         WMPLibObj_IWMPPlaylistCollection *ppPlaylistCollection);

HRESULT CVIFUNC WMPLib_IWMPPlayer4GetversionInfo (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  char **pbstrVersionInfo);

HRESULT CVIFUNC WMPLib_IWMPPlayer4launchURL (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo,
                                             const char *bstrURL);

HRESULT CVIFUNC WMPLib_IWMPPlayer4Getnetwork (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo,
                                              WMPLibObj_IWMPNetwork *ppQNI);

HRESULT CVIFUNC WMPLib_IWMPPlayer4GetcurrentPlaylist (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      WMPLibObj_IWMPPlaylist *ppPL);

HRESULT CVIFUNC WMPLib_IWMPPlayer4SetcurrentPlaylist (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      WMPLibObj_IWMPPlaylist ppPL);

HRESULT CVIFUNC WMPLib_IWMPPlayer4GetcdromCollection (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      WMPLibObj_IWMPCdromCollection *ppCdromCollection);

HRESULT CVIFUNC WMPLib_IWMPPlayer4GetclosedCaption (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    WMPLibObj_IWMPClosedCaption *ppClosedCaption);

HRESULT CVIFUNC WMPLib_IWMPPlayer4GetisOnline (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo,
                                               VBOOL *pfOnline);

HRESULT CVIFUNC WMPLib_IWMPPlayer4GetError (CAObjHandle objectHandle,
                                            ERRORINFO *errorInfo,
                                            WMPLibObj_IWMPError *ppError);

HRESULT CVIFUNC WMPLib_IWMPPlayer4Getstatus (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo,
                                             char **pbstrStatus);

HRESULT CVIFUNC WMPLib_IWMPPlayer4Getdvd (CAObjHandle objectHandle,
                                          ERRORINFO *errorInfo,
                                          WMPLibObj_IWMPDVD *ppDVD);

HRESULT CVIFUNC WMPLib_IWMPPlayer4newPlaylist (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo,
                                               const char *bstrName,
                                               const char *bstrURL,
                                               WMPLibObj_IWMPPlaylist *ppPlaylist);

HRESULT CVIFUNC WMPLib_IWMPPlayer4newMedia (CAObjHandle objectHandle,
                                            ERRORINFO *errorInfo,
                                            const char *bstrURL,
                                            WMPLibObj_IWMPMedia *ppMedia);

HRESULT CVIFUNC WMPLib_IWMPPlayer4Getenabled (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo,
                                              VBOOL *pbEnabled);

HRESULT CVIFUNC WMPLib_IWMPPlayer4Setenabled (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo,
                                              VBOOL pbEnabled);

HRESULT CVIFUNC WMPLib_IWMPPlayer4GetfullScreen (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 VBOOL *pbFullScreen);

HRESULT CVIFUNC WMPLib_IWMPPlayer4SetfullScreen (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 VBOOL pbFullScreen);

HRESULT CVIFUNC WMPLib_IWMPPlayer4GetenableContextMenu (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        VBOOL *pbEnableContextMenu);

HRESULT CVIFUNC WMPLib_IWMPPlayer4SetenableContextMenu (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        VBOOL pbEnableContextMenu);

HRESULT CVIFUNC WMPLib_IWMPPlayer4SetuiMode (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo,
                                             const char *pbstrMode);

HRESULT CVIFUNC WMPLib_IWMPPlayer4GetuiMode (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo,
                                             char **pbstrMode);

HRESULT CVIFUNC WMPLib_IWMPPlayer4GetstretchToFit (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   VBOOL *pbEnabled);

HRESULT CVIFUNC WMPLib_IWMPPlayer4SetstretchToFit (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   VBOOL pbEnabled);

HRESULT CVIFUNC WMPLib_IWMPPlayer4GetwindowlessVideo (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      VBOOL *pbEnabled);

HRESULT CVIFUNC WMPLib_IWMPPlayer4SetwindowlessVideo (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      VBOOL pbEnabled);

HRESULT CVIFUNC WMPLib_IWMPPlayer4GetisRemote (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo,
                                               VBOOL *pvarfIsRemote);

HRESULT CVIFUNC WMPLib_IWMPPlayer4GetplayerApplication (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        WMPLibObj_IWMPPlayerApplication *ppIWMPPlayerApplication);

HRESULT CVIFUNC WMPLib_IWMPPlayer4openPlayer (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo,
                                              const char *bstrURL);

HRESULT CVIFUNC WMPLib_NewIWMPPlayer3 (int panel, const char *label, int top,
                                       int left, int *controlID, int *UILError);

HRESULT CVIFUNC WMPLib_OpenIWMPPlayer3 (const char *fileName, int panel,
                                        const char *label, int top, int left,
                                        int *controlID, int *UILError);

HRESULT CVIFUNC WMPLib_IWMPPlayer3close (CAObjHandle objectHandle,
                                         ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPPlayer3GetURL (CAObjHandle objectHandle,
                                          ERRORINFO *errorInfo, char **pbstrURL);

HRESULT CVIFUNC WMPLib_IWMPPlayer3SetURL (CAObjHandle objectHandle,
                                          ERRORINFO *errorInfo,
                                          const char *pbstrURL);

HRESULT CVIFUNC WMPLib_IWMPPlayer3GetopenState (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                enum WMPLibEnum_WMPOpenState *pwmpos);

HRESULT CVIFUNC WMPLib_IWMPPlayer3GetplayState (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                enum WMPLibEnum_WMPPlayState *pwmpps);

HRESULT CVIFUNC WMPLib_IWMPPlayer3Getcontrols (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo,
                                               WMPLibObj_IWMPControls *ppControl);

HRESULT CVIFUNC WMPLib_IWMPPlayer3Getsettings (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo,
                                               WMPLibObj_IWMPSettings *ppSettings);

HRESULT CVIFUNC WMPLib_IWMPPlayer3GetcurrentMedia (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   WMPLibObj_IWMPMedia *ppMedia);

HRESULT CVIFUNC WMPLib_IWMPPlayer3SetcurrentMedia (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   WMPLibObj_IWMPMedia ppMedia);

HRESULT CVIFUNC WMPLib_IWMPPlayer3GetmediaCollection (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      WMPLibObj_IWMPMediaCollection *ppMediaCollection);

HRESULT CVIFUNC WMPLib_IWMPPlayer3GetplaylistCollection (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         WMPLibObj_IWMPPlaylistCollection *ppPlaylistCollection);

HRESULT CVIFUNC WMPLib_IWMPPlayer3GetversionInfo (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  char **pbstrVersionInfo);

HRESULT CVIFUNC WMPLib_IWMPPlayer3launchURL (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo,
                                             const char *bstrURL);

HRESULT CVIFUNC WMPLib_IWMPPlayer3Getnetwork (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo,
                                              WMPLibObj_IWMPNetwork *ppQNI);

HRESULT CVIFUNC WMPLib_IWMPPlayer3GetcurrentPlaylist (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      WMPLibObj_IWMPPlaylist *ppPL);

HRESULT CVIFUNC WMPLib_IWMPPlayer3SetcurrentPlaylist (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      WMPLibObj_IWMPPlaylist ppPL);

HRESULT CVIFUNC WMPLib_IWMPPlayer3GetcdromCollection (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      WMPLibObj_IWMPCdromCollection *ppCdromCollection);

HRESULT CVIFUNC WMPLib_IWMPPlayer3GetclosedCaption (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    WMPLibObj_IWMPClosedCaption *ppClosedCaption);

HRESULT CVIFUNC WMPLib_IWMPPlayer3GetisOnline (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo,
                                               VBOOL *pfOnline);

HRESULT CVIFUNC WMPLib_IWMPPlayer3GetError (CAObjHandle objectHandle,
                                            ERRORINFO *errorInfo,
                                            WMPLibObj_IWMPError *ppError);

HRESULT CVIFUNC WMPLib_IWMPPlayer3Getstatus (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo,
                                             char **pbstrStatus);

HRESULT CVIFUNC WMPLib_IWMPPlayer3Getdvd (CAObjHandle objectHandle,
                                          ERRORINFO *errorInfo,
                                          WMPLibObj_IWMPDVD *ppDVD);

HRESULT CVIFUNC WMPLib_IWMPPlayer3Getenabled (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo,
                                              VBOOL *pbEnabled);

HRESULT CVIFUNC WMPLib_IWMPPlayer3Setenabled (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo,
                                              VBOOL pbEnabled);

HRESULT CVIFUNC WMPLib_IWMPPlayer3GetfullScreen (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 VBOOL *pbFullScreen);

HRESULT CVIFUNC WMPLib_IWMPPlayer3SetfullScreen (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 VBOOL pbFullScreen);

HRESULT CVIFUNC WMPLib_IWMPPlayer3GetenableContextMenu (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        VBOOL *pbEnableContextMenu);

HRESULT CVIFUNC WMPLib_IWMPPlayer3SetenableContextMenu (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        VBOOL pbEnableContextMenu);

HRESULT CVIFUNC WMPLib_IWMPPlayer3SetuiMode (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo,
                                             const char *pbstrMode);

HRESULT CVIFUNC WMPLib_IWMPPlayer3GetuiMode (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo,
                                             char **pbstrMode);

HRESULT CVIFUNC WMPLib_IWMPPlayer3GetstretchToFit (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   VBOOL *pbEnabled);

HRESULT CVIFUNC WMPLib_IWMPPlayer3SetstretchToFit (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   VBOOL pbEnabled);

HRESULT CVIFUNC WMPLib_IWMPPlayer3GetwindowlessVideo (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      VBOOL *pbEnabled);

HRESULT CVIFUNC WMPLib_IWMPPlayer3SetwindowlessVideo (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      VBOOL pbEnabled);

HRESULT CVIFUNC WMPLib_NewIWMPPlayer2 (int panel, const char *label, int top,
                                       int left, int *controlID, int *UILError);

HRESULT CVIFUNC WMPLib_OpenIWMPPlayer2 (const char *fileName, int panel,
                                        const char *label, int top, int left,
                                        int *controlID, int *UILError);

HRESULT CVIFUNC WMPLib_IWMPPlayer2close (CAObjHandle objectHandle,
                                         ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPPlayer2GetURL (CAObjHandle objectHandle,
                                          ERRORINFO *errorInfo, char **pbstrURL);

HRESULT CVIFUNC WMPLib_IWMPPlayer2SetURL (CAObjHandle objectHandle,
                                          ERRORINFO *errorInfo,
                                          const char *pbstrURL);

HRESULT CVIFUNC WMPLib_IWMPPlayer2GetopenState (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                enum WMPLibEnum_WMPOpenState *pwmpos);

HRESULT CVIFUNC WMPLib_IWMPPlayer2GetplayState (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                enum WMPLibEnum_WMPPlayState *pwmpps);

HRESULT CVIFUNC WMPLib_IWMPPlayer2Getcontrols (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo,
                                               WMPLibObj_IWMPControls *ppControl);

HRESULT CVIFUNC WMPLib_IWMPPlayer2Getsettings (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo,
                                               WMPLibObj_IWMPSettings *ppSettings);

HRESULT CVIFUNC WMPLib_IWMPPlayer2GetcurrentMedia (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   WMPLibObj_IWMPMedia *ppMedia);

HRESULT CVIFUNC WMPLib_IWMPPlayer2SetcurrentMedia (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   WMPLibObj_IWMPMedia ppMedia);

HRESULT CVIFUNC WMPLib_IWMPPlayer2GetmediaCollection (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      WMPLibObj_IWMPMediaCollection *ppMediaCollection);

HRESULT CVIFUNC WMPLib_IWMPPlayer2GetplaylistCollection (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         WMPLibObj_IWMPPlaylistCollection *ppPlaylistCollection);

HRESULT CVIFUNC WMPLib_IWMPPlayer2GetversionInfo (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  char **pbstrVersionInfo);

HRESULT CVIFUNC WMPLib_IWMPPlayer2launchURL (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo,
                                             const char *bstrURL);

HRESULT CVIFUNC WMPLib_IWMPPlayer2Getnetwork (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo,
                                              WMPLibObj_IWMPNetwork *ppQNI);

HRESULT CVIFUNC WMPLib_IWMPPlayer2GetcurrentPlaylist (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      WMPLibObj_IWMPPlaylist *ppPL);

HRESULT CVIFUNC WMPLib_IWMPPlayer2SetcurrentPlaylist (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      WMPLibObj_IWMPPlaylist ppPL);

HRESULT CVIFUNC WMPLib_IWMPPlayer2GetcdromCollection (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      WMPLibObj_IWMPCdromCollection *ppCdromCollection);

HRESULT CVIFUNC WMPLib_IWMPPlayer2GetclosedCaption (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    WMPLibObj_IWMPClosedCaption *ppClosedCaption);

HRESULT CVIFUNC WMPLib_IWMPPlayer2GetisOnline (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo,
                                               VBOOL *pfOnline);

HRESULT CVIFUNC WMPLib_IWMPPlayer2GetError (CAObjHandle objectHandle,
                                            ERRORINFO *errorInfo,
                                            WMPLibObj_IWMPError *ppError);

HRESULT CVIFUNC WMPLib_IWMPPlayer2Getstatus (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo,
                                             char **pbstrStatus);

HRESULT CVIFUNC WMPLib_IWMPPlayer2Getenabled (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo,
                                              VBOOL *pbEnabled);

HRESULT CVIFUNC WMPLib_IWMPPlayer2Setenabled (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo,
                                              VBOOL pbEnabled);

HRESULT CVIFUNC WMPLib_IWMPPlayer2GetfullScreen (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 VBOOL *pbFullScreen);

HRESULT CVIFUNC WMPLib_IWMPPlayer2SetfullScreen (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 VBOOL pbFullScreen);

HRESULT CVIFUNC WMPLib_IWMPPlayer2GetenableContextMenu (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        VBOOL *pbEnableContextMenu);

HRESULT CVIFUNC WMPLib_IWMPPlayer2SetenableContextMenu (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        VBOOL pbEnableContextMenu);

HRESULT CVIFUNC WMPLib_IWMPPlayer2SetuiMode (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo,
                                             const char *pbstrMode);

HRESULT CVIFUNC WMPLib_IWMPPlayer2GetuiMode (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo,
                                             char **pbstrMode);

HRESULT CVIFUNC WMPLib_IWMPPlayer2GetstretchToFit (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   VBOOL *pbEnabled);

HRESULT CVIFUNC WMPLib_IWMPPlayer2SetstretchToFit (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   VBOOL pbEnabled);

HRESULT CVIFUNC WMPLib_IWMPPlayer2GetwindowlessVideo (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      VBOOL *pbEnabled);

HRESULT CVIFUNC WMPLib_IWMPPlayer2SetwindowlessVideo (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      VBOOL pbEnabled);

HRESULT CVIFUNC WMPLib_NewIWMPPlayer (int panel, const char *label, int top,
                                      int left, int *controlID, int *UILError);

HRESULT CVIFUNC WMPLib_OpenIWMPPlayer (const char *fileName, int panel,
                                       const char *label, int top, int left,
                                       int *controlID, int *UILError);

HRESULT CVIFUNC WMPLib_IWMPPlayerclose (CAObjHandle objectHandle,
                                        ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPPlayerGetURL (CAObjHandle objectHandle,
                                         ERRORINFO *errorInfo, char **pbstrURL);

HRESULT CVIFUNC WMPLib_IWMPPlayerSetURL (CAObjHandle objectHandle,
                                         ERRORINFO *errorInfo,
                                         const char *pbstrURL);

HRESULT CVIFUNC WMPLib_IWMPPlayerGetopenState (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo,
                                               enum WMPLibEnum_WMPOpenState *pwmpos);

HRESULT CVIFUNC WMPLib_IWMPPlayerGetplayState (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo,
                                               enum WMPLibEnum_WMPPlayState *pwmpps);

HRESULT CVIFUNC WMPLib_IWMPPlayerGetcontrols (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo,
                                              WMPLibObj_IWMPControls *ppControl);

HRESULT CVIFUNC WMPLib_IWMPPlayerGetsettings (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo,
                                              WMPLibObj_IWMPSettings *ppSettings);

HRESULT CVIFUNC WMPLib_IWMPPlayerGetcurrentMedia (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  WMPLibObj_IWMPMedia *ppMedia);

HRESULT CVIFUNC WMPLib_IWMPPlayerSetcurrentMedia (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  WMPLibObj_IWMPMedia ppMedia);

HRESULT CVIFUNC WMPLib_IWMPPlayerGetmediaCollection (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     WMPLibObj_IWMPMediaCollection *ppMediaCollection);

HRESULT CVIFUNC WMPLib_IWMPPlayerGetplaylistCollection (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        WMPLibObj_IWMPPlaylistCollection *ppPlaylistCollection);

HRESULT CVIFUNC WMPLib_IWMPPlayerGetversionInfo (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 char **pbstrVersionInfo);

HRESULT CVIFUNC WMPLib_IWMPPlayerlaunchURL (CAObjHandle objectHandle,
                                            ERRORINFO *errorInfo,
                                            const char *bstrURL);

HRESULT CVIFUNC WMPLib_IWMPPlayerGetnetwork (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo,
                                             WMPLibObj_IWMPNetwork *ppQNI);

HRESULT CVIFUNC WMPLib_IWMPPlayerGetcurrentPlaylist (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     WMPLibObj_IWMPPlaylist *ppPL);

HRESULT CVIFUNC WMPLib_IWMPPlayerSetcurrentPlaylist (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     WMPLibObj_IWMPPlaylist ppPL);

HRESULT CVIFUNC WMPLib_IWMPPlayerGetcdromCollection (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     WMPLibObj_IWMPCdromCollection *ppCdromCollection);

HRESULT CVIFUNC WMPLib_IWMPPlayerGetclosedCaption (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   WMPLibObj_IWMPClosedCaption *ppClosedCaption);

HRESULT CVIFUNC WMPLib_IWMPPlayerGetisOnline (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo,
                                              VBOOL *pfOnline);

HRESULT CVIFUNC WMPLib_IWMPPlayerGetError (CAObjHandle objectHandle,
                                           ERRORINFO *errorInfo,
                                           WMPLibObj_IWMPError *ppError);

HRESULT CVIFUNC WMPLib_IWMPPlayerGetstatus (CAObjHandle objectHandle,
                                            ERRORINFO *errorInfo,
                                            char **pbstrStatus);

HRESULT CVIFUNC WMPLib_IWMPPlayerGetenabled (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo,
                                             VBOOL *pbEnabled);

HRESULT CVIFUNC WMPLib_IWMPPlayerSetenabled (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo,
                                             VBOOL pbEnabled);

HRESULT CVIFUNC WMPLib_IWMPPlayerGetfullScreen (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                VBOOL *pbFullScreen);

HRESULT CVIFUNC WMPLib_IWMPPlayerSetfullScreen (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                VBOOL pbFullScreen);

HRESULT CVIFUNC WMPLib_IWMPPlayerGetenableContextMenu (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       VBOOL *pbEnableContextMenu);

HRESULT CVIFUNC WMPLib_IWMPPlayerSetenableContextMenu (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       VBOOL pbEnableContextMenu);

HRESULT CVIFUNC WMPLib_IWMPPlayerSetuiMode (CAObjHandle objectHandle,
                                            ERRORINFO *errorInfo,
                                            const char *pbstrMode);

HRESULT CVIFUNC WMPLib_IWMPPlayerGetuiMode (CAObjHandle objectHandle,
                                            ERRORINFO *errorInfo,
                                            char **pbstrMode);

HRESULT CVIFUNC WMPLib_NewIWMPControls (int panel, const char *label, int top,
                                        int left, int *controlID, int *UILError);

HRESULT CVIFUNC WMPLib_OpenIWMPControls (const char *fileName, int panel,
                                         const char *label, int top, int left,
                                         int *controlID, int *UILError);

HRESULT CVIFUNC WMPLib_IWMPControlsGetisAvailable (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   const char *bstrItem,
                                                   VBOOL *pIsAvailable);

HRESULT CVIFUNC WMPLib_IWMPControlsplay (CAObjHandle objectHandle,
                                         ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPControlsstop (CAObjHandle objectHandle,
                                         ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPControlspause (CAObjHandle objectHandle,
                                          ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPControlsfastForward (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPControlsfastReverse (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPControlsGetcurrentPosition (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       double *pdCurrentPosition);

HRESULT CVIFUNC WMPLib_IWMPControlsSetcurrentPosition (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       double pdCurrentPosition);

HRESULT CVIFUNC WMPLib_IWMPControlsGetcurrentPositionString (CAObjHandle objectHandle,
                                                             ERRORINFO *errorInfo,
                                                             char **pbstrCurrentPosition);

HRESULT CVIFUNC WMPLib_IWMPControlsnext (CAObjHandle objectHandle,
                                         ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPControlsprevious (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPControlsGetcurrentItem (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   WMPLibObj_IWMPMedia *ppIWMPMedia);

HRESULT CVIFUNC WMPLib_IWMPControlsSetcurrentItem (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   WMPLibObj_IWMPMedia ppIWMPMedia);

HRESULT CVIFUNC WMPLib_IWMPControlsGetcurrentMarker (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     long *plMarker);

HRESULT CVIFUNC WMPLib_IWMPControlsSetcurrentMarker (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     long plMarker);

HRESULT CVIFUNC WMPLib_IWMPControlsplayItem (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo,
                                             WMPLibObj_IWMPMedia pIWMPMedia);

HRESULT CVIFUNC WMPLib_NewIWMPSettings (int panel, const char *label, int top,
                                        int left, int *controlID, int *UILError);

HRESULT CVIFUNC WMPLib_OpenIWMPSettings (const char *fileName, int panel,
                                         const char *label, int top, int left,
                                         int *controlID, int *UILError);

HRESULT CVIFUNC WMPLib_IWMPSettingsGetisAvailable (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   const char *bstrItem,
                                                   VBOOL *pIsAvailable);

HRESULT CVIFUNC WMPLib_IWMPSettingsGetautoStart (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 VBOOL *pfAutoStart);

HRESULT CVIFUNC WMPLib_IWMPSettingsSetautoStart (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 VBOOL pfAutoStart);

HRESULT CVIFUNC WMPLib_IWMPSettingsGetbaseURL (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo,
                                               char **pbstrBaseURL);

HRESULT CVIFUNC WMPLib_IWMPSettingsSetbaseURL (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo,
                                               const char *pbstrBaseURL);

HRESULT CVIFUNC WMPLib_IWMPSettingsGetdefaultFrame (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    char **pbstrDefaultFrame);

HRESULT CVIFUNC WMPLib_IWMPSettingsSetdefaultFrame (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    const char *pbstrDefaultFrame);

HRESULT CVIFUNC WMPLib_IWMPSettingsGetinvokeURLs (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  VBOOL *pfInvokeURLs);

HRESULT CVIFUNC WMPLib_IWMPSettingsSetinvokeURLs (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  VBOOL pfInvokeURLs);

HRESULT CVIFUNC WMPLib_IWMPSettingsGetmute (CAObjHandle objectHandle,
                                            ERRORINFO *errorInfo, VBOOL *pfMute);

HRESULT CVIFUNC WMPLib_IWMPSettingsSetmute (CAObjHandle objectHandle,
                                            ERRORINFO *errorInfo, VBOOL pfMute);

HRESULT CVIFUNC WMPLib_IWMPSettingsGetplayCount (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 long *plCount);

HRESULT CVIFUNC WMPLib_IWMPSettingsSetplayCount (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 long plCount);

HRESULT CVIFUNC WMPLib_IWMPSettingsGetrate (CAObjHandle objectHandle,
                                            ERRORINFO *errorInfo, double *pdRate);

HRESULT CVIFUNC WMPLib_IWMPSettingsSetrate (CAObjHandle objectHandle,
                                            ERRORINFO *errorInfo, double pdRate);

HRESULT CVIFUNC WMPLib_IWMPSettingsGetbalance (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo,
                                               long *plBalance);

HRESULT CVIFUNC WMPLib_IWMPSettingsSetbalance (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo,
                                               long plBalance);

HRESULT CVIFUNC WMPLib_IWMPSettingsGetvolume (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo,
                                              long *plVolume);

HRESULT CVIFUNC WMPLib_IWMPSettingsSetvolume (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo,
                                              long plVolume);

HRESULT CVIFUNC WMPLib_IWMPSettingsgetMode (CAObjHandle objectHandle,
                                            ERRORINFO *errorInfo,
                                            const char *bstrMode,
                                            VBOOL *pvarfMode);

HRESULT CVIFUNC WMPLib_IWMPSettingssetMode (CAObjHandle objectHandle,
                                            ERRORINFO *errorInfo,
                                            const char *bstrMode, VBOOL varfMode);

HRESULT CVIFUNC WMPLib_IWMPSettingsGetenableErrorDialogs (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          VBOOL *pfEnableErrorDialogs);

HRESULT CVIFUNC WMPLib_IWMPSettingsSetenableErrorDialogs (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          VBOOL pfEnableErrorDialogs);

HRESULT CVIFUNC WMPLib_NewIWMPPlaylist (int panel, const char *label, int top,
                                        int left, int *controlID, int *UILError);

HRESULT CVIFUNC WMPLib_OpenIWMPPlaylist (const char *fileName, int panel,
                                         const char *label, int top, int left,
                                         int *controlID, int *UILError);

HRESULT CVIFUNC WMPLib_IWMPPlaylistGetcount (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo, long *plCount);

HRESULT CVIFUNC WMPLib_IWMPPlaylistGetname (CAObjHandle objectHandle,
                                            ERRORINFO *errorInfo,
                                            char **pbstrName);

HRESULT CVIFUNC WMPLib_IWMPPlaylistSetname (CAObjHandle objectHandle,
                                            ERRORINFO *errorInfo,
                                            const char *pbstrName);

HRESULT CVIFUNC WMPLib_IWMPPlaylistGetattributeCount (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      long *plCount);

HRESULT CVIFUNC WMPLib_IWMPPlaylistGetattributeName (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     long lIndex,
                                                     char **pbstrAttributeName);

HRESULT CVIFUNC WMPLib_IWMPPlaylistGetItem (CAObjHandle objectHandle,
                                            ERRORINFO *errorInfo, long lIndex,
                                            WMPLibObj_IWMPMedia *ppIWMPMedia);

HRESULT CVIFUNC WMPLib_IWMPPlaylistgetItemInfo (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                const char *bstrName,
                                                char **pbstrVal);

HRESULT CVIFUNC WMPLib_IWMPPlaylistsetItemInfo (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                const char *bstrName,
                                                const char *bstrValue);

HRESULT CVIFUNC WMPLib_IWMPPlaylistGetisIdentical (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   WMPLibObj_IWMPPlaylist pIWMPPlaylist,
                                                   VBOOL *pvbool);

HRESULT CVIFUNC WMPLib_IWMPPlaylistclear (CAObjHandle objectHandle,
                                          ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPPlaylistinsertItem (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo, long lIndex,
                                               WMPLibObj_IWMPMedia pIWMPMedia);

HRESULT CVIFUNC WMPLib_IWMPPlaylistappendItem (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo,
                                               WMPLibObj_IWMPMedia pIWMPMedia);

HRESULT CVIFUNC WMPLib_IWMPPlaylistremoveItem (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo,
                                               WMPLibObj_IWMPMedia pIWMPMedia);

HRESULT CVIFUNC WMPLib_IWMPPlaylistmoveItem (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo,
                                             long lIndexOld, long lIndexNew);

HRESULT CVIFUNC WMPLib_NewIWMPMedia (int panel, const char *label, int top,
                                     int left, int *controlID, int *UILError);

HRESULT CVIFUNC WMPLib_OpenIWMPMedia (const char *fileName, int panel,
                                      const char *label, int top, int left,
                                      int *controlID, int *UILError);

HRESULT CVIFUNC WMPLib_IWMPMediaGetisIdentical (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                WMPLibObj_IWMPMedia pIWMPMedia,
                                                VBOOL *pvbool);

HRESULT CVIFUNC WMPLib_IWMPMediaGetsourceURL (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo,
                                              char **pbstrSourceURL);

HRESULT CVIFUNC WMPLib_IWMPMediaGetname (CAObjHandle objectHandle,
                                         ERRORINFO *errorInfo, char **pbstrName);

HRESULT CVIFUNC WMPLib_IWMPMediaSetname (CAObjHandle objectHandle,
                                         ERRORINFO *errorInfo,
                                         const char *pbstrName);

HRESULT CVIFUNC WMPLib_IWMPMediaGetimageSourceWidth (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     long *pWidth);

HRESULT CVIFUNC WMPLib_IWMPMediaGetimageSourceHeight (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      long *pHeight);

HRESULT CVIFUNC WMPLib_IWMPMediaGetmarkerCount (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                long *pMarkerCount);

HRESULT CVIFUNC WMPLib_IWMPMediagetMarkerTime (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo,
                                               long markerNum,
                                               double *pMarkerTime);

HRESULT CVIFUNC WMPLib_IWMPMediagetMarkerName (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo,
                                               long markerNum,
                                               char **pbstrMarkerName);

HRESULT CVIFUNC WMPLib_IWMPMediaGetduration (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo,
                                             double *pDuration);

HRESULT CVIFUNC WMPLib_IWMPMediaGetdurationString (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   char **pbstrDuration);

HRESULT CVIFUNC WMPLib_IWMPMediaGetattributeCount (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   long *plCount);

HRESULT CVIFUNC WMPLib_IWMPMediagetAttributeName (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  long lIndex,
                                                  char **pbstrItemName);

HRESULT CVIFUNC WMPLib_IWMPMediagetItemInfo (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo,
                                             const char *bstrItemName,
                                             char **pbstrVal);

HRESULT CVIFUNC WMPLib_IWMPMediasetItemInfo (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo,
                                             const char *bstrItemName,
                                             const char *bstrVal);

HRESULT CVIFUNC WMPLib_IWMPMediagetItemInfoByAtom (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   long lAtom, char **pbstrVal);

HRESULT CVIFUNC WMPLib_IWMPMediaisMemberOf (CAObjHandle objectHandle,
                                            ERRORINFO *errorInfo,
                                            WMPLibObj_IWMPPlaylist pPlaylist,
                                            VBOOL *pvarfIsMemberOf);

HRESULT CVIFUNC WMPLib_IWMPMediaisReadOnlyItem (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                const char *bstrItemName,
                                                VBOOL *pvarfIsReadOnly);

HRESULT CVIFUNC WMPLib_NewIWMPMediaCollection (int panel, const char *label,
                                               int top, int left, int *controlID,
                                               int *UILError);

HRESULT CVIFUNC WMPLib_OpenIWMPMediaCollection (const char *fileName, int panel,
                                                const char *label, int top,
                                                int left, int *controlID,
                                                int *UILError);

HRESULT CVIFUNC WMPLib_IWMPMediaCollectionadd (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo,
                                               const char *bstrURL,
                                               WMPLibObj_IWMPMedia *ppItem);

HRESULT CVIFUNC WMPLib_IWMPMediaCollectiongetAll (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  WMPLibObj_IWMPPlaylist *ppMediaItems);

HRESULT CVIFUNC WMPLib_IWMPMediaCollectiongetByName (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     const char *bstrName,
                                                     WMPLibObj_IWMPPlaylist *ppMediaItems);

HRESULT CVIFUNC WMPLib_IWMPMediaCollectiongetByGenre (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      const char *bstrGenre,
                                                      WMPLibObj_IWMPPlaylist *ppMediaItems);

HRESULT CVIFUNC WMPLib_IWMPMediaCollectiongetByAuthor (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       const char *bstrAuthor,
                                                       WMPLibObj_IWMPPlaylist *ppMediaItems);

HRESULT CVIFUNC WMPLib_IWMPMediaCollectiongetByAlbum (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      const char *bstrAlbum,
                                                      WMPLibObj_IWMPPlaylist *ppMediaItems);

HRESULT CVIFUNC WMPLib_IWMPMediaCollectiongetByAttribute (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          const char *bstrAttribute,
                                                          const char *bstrValue,
                                                          WMPLibObj_IWMPPlaylist *ppMediaItems);

HRESULT CVIFUNC WMPLib_IWMPMediaCollectionremove (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  WMPLibObj_IWMPMedia pItem,
                                                  VBOOL varfDeleteFile);

HRESULT CVIFUNC WMPLib_IWMPMediaCollectiongetAttributeStringCollection (CAObjHandle objectHandle,
                                                                        ERRORINFO *errorInfo,
                                                                        const char *bstrAttribute,
                                                                        const char *bstrMediaType,
                                                                        WMPLibObj_IWMPStringCollection *ppStringCollection);

HRESULT CVIFUNC WMPLib_IWMPMediaCollectiongetMediaAtom (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        const char *bstrItemName,
                                                        long *plAtom);

HRESULT CVIFUNC WMPLib_IWMPMediaCollectionsetDeleted (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      WMPLibObj_IWMPMedia pItem,
                                                      VBOOL varfIsDeleted);

HRESULT CVIFUNC WMPLib_IWMPMediaCollectionisDeleted (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     WMPLibObj_IWMPMedia pItem,
                                                     VBOOL *pvarfIsDeleted);

HRESULT CVIFUNC WMPLib_NewIWMPPlaylistCollection (int panel, const char *label,
                                                  int top, int left,
                                                  int *controlID, int *UILError);

HRESULT CVIFUNC WMPLib_OpenIWMPPlaylistCollection (const char *fileName,
                                                   int panel, const char *label,
                                                   int top, int left,
                                                   int *controlID, int *UILError);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCollectionnewPlaylist (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          const char *bstrName,
                                                          WMPLibObj_IWMPPlaylist *ppItem);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCollectiongetAll (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     WMPLibObj_IWMPPlaylistArray *ppPlaylistArray);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCollectiongetByName (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        const char *bstrName,
                                                        WMPLibObj_IWMPPlaylistArray *ppPlaylistArray);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCollectionremove (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     WMPLibObj_IWMPPlaylist pItem);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCollectionsetDeleted (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         WMPLibObj_IWMPPlaylist pItem,
                                                         VBOOL varfIsDeleted);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCollectionisDeleted (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        WMPLibObj_IWMPPlaylist pItem,
                                                        VBOOL *pvarfIsDeleted);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCollectionimportPlaylist (CAObjHandle objectHandle,
                                                             ERRORINFO *errorInfo,
                                                             WMPLibObj_IWMPPlaylist pItem,
                                                             WMPLibObj_IWMPPlaylist *ppImportedItem);

HRESULT CVIFUNC WMPLib_NewIWMPCdromCollection (int panel, const char *label,
                                               int top, int left, int *controlID,
                                               int *UILError);

HRESULT CVIFUNC WMPLib_OpenIWMPCdromCollection (const char *fileName, int panel,
                                                const char *label, int top,
                                                int left, int *controlID,
                                                int *UILError);

HRESULT CVIFUNC WMPLib_IWMPCdromCollectionGetcount (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    long *plCount);

HRESULT CVIFUNC WMPLib_IWMPCdromCollectionItem (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                long lIndex,
                                                WMPLibObj_IWMPCdrom *ppItem);

HRESULT CVIFUNC WMPLib_IWMPCdromCollectiongetByDriveSpecifier (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo,
                                                               const char *bstrDriveSpecifier,
                                                               WMPLibObj_IWMPCdrom *ppCdrom);

HRESULT CVIFUNC WMPLib_NewIWMPError (int panel, const char *label, int top,
                                     int left, int *controlID, int *UILError);

HRESULT CVIFUNC WMPLib_OpenIWMPError (const char *fileName, int panel,
                                      const char *label, int top, int left,
                                      int *controlID, int *UILError);

HRESULT CVIFUNC WMPLib_IWMPErrorclearErrorQueue (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPErrorGeterrorCount (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo,
                                               long *plNumErrors);

HRESULT CVIFUNC WMPLib_IWMPErrorGetItem (CAObjHandle objectHandle,
                                         ERRORINFO *errorInfo, long dwIndex,
                                         WMPLibObj_IWMPErrorItem *ppErrorItem);

HRESULT CVIFUNC WMPLib_IWMPErrorwebHelp (CAObjHandle objectHandle,
                                         ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_NewIWMPErrorItem (int panel, const char *label, int top,
                                         int left, int *controlID, int *UILError);

HRESULT CVIFUNC WMPLib_OpenIWMPErrorItem (const char *fileName, int panel,
                                          const char *label, int top, int left,
                                          int *controlID, int *UILError);

HRESULT CVIFUNC WMPLib_IWMPErrorItemGeterrorCode (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  long *phr);

HRESULT CVIFUNC WMPLib_IWMPErrorItemGeterrorDescription (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         char **pbstrDescription);

HRESULT CVIFUNC WMPLib_IWMPErrorItemGeterrorContext (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     VARIANT *pvarContext);

HRESULT CVIFUNC WMPLib_IWMPErrorItemGetremedy (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo,
                                               long *plRemedy);

HRESULT CVIFUNC WMPLib_IWMPErrorItemGetcustomUrl (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  char **pbstrCustomUrl);

HRESULT CVIFUNC WMPLib_NewIWMPErrorItem2 (int panel, const char *label, int top,
                                          int left, int *controlID,
                                          int *UILError);

HRESULT CVIFUNC WMPLib_OpenIWMPErrorItem2 (const char *fileName, int panel,
                                           const char *label, int top, int left,
                                           int *controlID, int *UILError);

HRESULT CVIFUNC WMPLib_IWMPErrorItem2GeterrorCode (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   long *phr);

HRESULT CVIFUNC WMPLib_IWMPErrorItem2GeterrorDescription (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          char **pbstrDescription);

HRESULT CVIFUNC WMPLib_IWMPErrorItem2GeterrorContext (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      VARIANT *pvarContext);

HRESULT CVIFUNC WMPLib_IWMPErrorItem2Getremedy (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                long *plRemedy);

HRESULT CVIFUNC WMPLib_IWMPErrorItem2GetcustomUrl (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   char **pbstrCustomUrl);

HRESULT CVIFUNC WMPLib_IWMPErrorItem2Getcondition (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   long *plCondition);

HRESULT CVIFUNC WMPLib_NewIWMPClosedCaption (int panel, const char *label,
                                             int top, int left, int *controlID,
                                             int *UILError);

HRESULT CVIFUNC WMPLib_OpenIWMPClosedCaption (const char *fileName, int panel,
                                              const char *label, int top,
                                              int left, int *controlID,
                                              int *UILError);

HRESULT CVIFUNC WMPLib_IWMPClosedCaptionGetSAMIStyle (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      char **pbstrSAMIStyle);

HRESULT CVIFUNC WMPLib_IWMPClosedCaptionSetSAMIStyle (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      const char *pbstrSAMIStyle);

HRESULT CVIFUNC WMPLib_IWMPClosedCaptionGetSAMILang (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     char **pbstrSAMILang);

HRESULT CVIFUNC WMPLib_IWMPClosedCaptionSetSAMILang (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     const char *pbstrSAMILang);

HRESULT CVIFUNC WMPLib_IWMPClosedCaptionGetSAMIFileName (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         char **pbstrSAMIFileName);

HRESULT CVIFUNC WMPLib_IWMPClosedCaptionSetSAMIFileName (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         const char *pbstrSAMIFileName);

HRESULT CVIFUNC WMPLib_IWMPClosedCaptionGetcaptioningId (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         char **pbstrCaptioningID);

HRESULT CVIFUNC WMPLib_IWMPClosedCaptionSetcaptioningId (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         const char *pbstrCaptioningID);

HRESULT CVIFUNC WMPLib_NewIWMPDVD (int panel, const char *label, int top,
                                   int left, int *controlID, int *UILError);

HRESULT CVIFUNC WMPLib_OpenIWMPDVD (const char *fileName, int panel,
                                    const char *label, int top, int left,
                                    int *controlID, int *UILError);

HRESULT CVIFUNC WMPLib_IWMPDVDGetisAvailable (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo,
                                              const char *bstrItem,
                                              VBOOL *pIsAvailable);

HRESULT CVIFUNC WMPLib_IWMPDVDGetdomain (CAObjHandle objectHandle,
                                         ERRORINFO *errorInfo, char **strDomain);

HRESULT CVIFUNC WMPLib_IWMPDVDtopMenu (CAObjHandle objectHandle,
                                       ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPDVDtitleMenu (CAObjHandle objectHandle,
                                         ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPDVDback (CAObjHandle objectHandle,
                                    ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPDVDresume (CAObjHandle objectHandle,
                                      ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_NewIWMPControls2 (int panel, const char *label, int top,
                                         int left, int *controlID, int *UILError);

HRESULT CVIFUNC WMPLib_OpenIWMPControls2 (const char *fileName, int panel,
                                          const char *label, int top, int left,
                                          int *controlID, int *UILError);

HRESULT CVIFUNC WMPLib_IWMPControls2GetisAvailable (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    const char *bstrItem,
                                                    VBOOL *pIsAvailable);

HRESULT CVIFUNC WMPLib_IWMPControls2play (CAObjHandle objectHandle,
                                          ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPControls2stop (CAObjHandle objectHandle,
                                          ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPControls2pause (CAObjHandle objectHandle,
                                           ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPControls2fastForward (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPControls2fastReverse (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPControls2GetcurrentPosition (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        double *pdCurrentPosition);

HRESULT CVIFUNC WMPLib_IWMPControls2SetcurrentPosition (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        double pdCurrentPosition);

HRESULT CVIFUNC WMPLib_IWMPControls2GetcurrentPositionString (CAObjHandle objectHandle,
                                                              ERRORINFO *errorInfo,
                                                              char **pbstrCurrentPosition);

HRESULT CVIFUNC WMPLib_IWMPControls2next (CAObjHandle objectHandle,
                                          ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPControls2previous (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPControls2GetcurrentItem (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    WMPLibObj_IWMPMedia *ppIWMPMedia);

HRESULT CVIFUNC WMPLib_IWMPControls2SetcurrentItem (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    WMPLibObj_IWMPMedia ppIWMPMedia);

HRESULT CVIFUNC WMPLib_IWMPControls2GetcurrentMarker (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      long *plMarker);

HRESULT CVIFUNC WMPLib_IWMPControls2SetcurrentMarker (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      long plMarker);

HRESULT CVIFUNC WMPLib_IWMPControls2playItem (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo,
                                              WMPLibObj_IWMPMedia pIWMPMedia);

HRESULT CVIFUNC WMPLib_IWMPControls2step (CAObjHandle objectHandle,
                                          ERRORINFO *errorInfo, long lStep);

HRESULT CVIFUNC WMPLib_NewIWMPMedia2 (int panel, const char *label, int top,
                                      int left, int *controlID, int *UILError);

HRESULT CVIFUNC WMPLib_OpenIWMPMedia2 (const char *fileName, int panel,
                                       const char *label, int top, int left,
                                       int *controlID, int *UILError);

HRESULT CVIFUNC WMPLib_IWMPMedia2GetisIdentical (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 WMPLibObj_IWMPMedia pIWMPMedia,
                                                 VBOOL *pvbool);

HRESULT CVIFUNC WMPLib_IWMPMedia2GetsourceURL (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo,
                                               char **pbstrSourceURL);

HRESULT CVIFUNC WMPLib_IWMPMedia2Getname (CAObjHandle objectHandle,
                                          ERRORINFO *errorInfo, char **pbstrName);

HRESULT CVIFUNC WMPLib_IWMPMedia2Setname (CAObjHandle objectHandle,
                                          ERRORINFO *errorInfo,
                                          const char *pbstrName);

HRESULT CVIFUNC WMPLib_IWMPMedia2GetimageSourceWidth (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      long *pWidth);

HRESULT CVIFUNC WMPLib_IWMPMedia2GetimageSourceHeight (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       long *pHeight);

HRESULT CVIFUNC WMPLib_IWMPMedia2GetmarkerCount (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 long *pMarkerCount);

HRESULT CVIFUNC WMPLib_IWMPMedia2getMarkerTime (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                long markerNum,
                                                double *pMarkerTime);

HRESULT CVIFUNC WMPLib_IWMPMedia2getMarkerName (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                long markerNum,
                                                char **pbstrMarkerName);

HRESULT CVIFUNC WMPLib_IWMPMedia2Getduration (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo,
                                              double *pDuration);

HRESULT CVIFUNC WMPLib_IWMPMedia2GetdurationString (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    char **pbstrDuration);

HRESULT CVIFUNC WMPLib_IWMPMedia2GetattributeCount (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    long *plCount);

HRESULT CVIFUNC WMPLib_IWMPMedia2getAttributeName (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   long lIndex,
                                                   char **pbstrItemName);

HRESULT CVIFUNC WMPLib_IWMPMedia2getItemInfo (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo,
                                              const char *bstrItemName,
                                              char **pbstrVal);

HRESULT CVIFUNC WMPLib_IWMPMedia2setItemInfo (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo,
                                              const char *bstrItemName,
                                              const char *bstrVal);

HRESULT CVIFUNC WMPLib_IWMPMedia2getItemInfoByAtom (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    long lAtom, char **pbstrVal);

HRESULT CVIFUNC WMPLib_IWMPMedia2isMemberOf (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo,
                                             WMPLibObj_IWMPPlaylist pPlaylist,
                                             VBOOL *pvarfIsMemberOf);

HRESULT CVIFUNC WMPLib_IWMPMedia2isReadOnlyItem (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 const char *bstrItemName,
                                                 VBOOL *pvarfIsReadOnly);

HRESULT CVIFUNC WMPLib_IWMPMedia2GetError (CAObjHandle objectHandle,
                                           ERRORINFO *errorInfo,
                                           WMPLibObj_IWMPErrorItem *ppIWMPErrorItem);

HRESULT CVIFUNC WMPLib_NewIWMPMedia3 (int panel, const char *label, int top,
                                      int left, int *controlID, int *UILError);

HRESULT CVIFUNC WMPLib_OpenIWMPMedia3 (const char *fileName, int panel,
                                       const char *label, int top, int left,
                                       int *controlID, int *UILError);

HRESULT CVIFUNC WMPLib_IWMPMedia3GetisIdentical (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 WMPLibObj_IWMPMedia pIWMPMedia,
                                                 VBOOL *pvbool);

HRESULT CVIFUNC WMPLib_IWMPMedia3GetsourceURL (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo,
                                               char **pbstrSourceURL);

HRESULT CVIFUNC WMPLib_IWMPMedia3Getname (CAObjHandle objectHandle,
                                          ERRORINFO *errorInfo, char **pbstrName);

HRESULT CVIFUNC WMPLib_IWMPMedia3Setname (CAObjHandle objectHandle,
                                          ERRORINFO *errorInfo,
                                          const char *pbstrName);

HRESULT CVIFUNC WMPLib_IWMPMedia3GetimageSourceWidth (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      long *pWidth);

HRESULT CVIFUNC WMPLib_IWMPMedia3GetimageSourceHeight (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       long *pHeight);

HRESULT CVIFUNC WMPLib_IWMPMedia3GetmarkerCount (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 long *pMarkerCount);

HRESULT CVIFUNC WMPLib_IWMPMedia3getMarkerTime (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                long markerNum,
                                                double *pMarkerTime);

HRESULT CVIFUNC WMPLib_IWMPMedia3getMarkerName (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                long markerNum,
                                                char **pbstrMarkerName);

HRESULT CVIFUNC WMPLib_IWMPMedia3Getduration (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo,
                                              double *pDuration);

HRESULT CVIFUNC WMPLib_IWMPMedia3GetdurationString (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    char **pbstrDuration);

HRESULT CVIFUNC WMPLib_IWMPMedia3GetattributeCount (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    long *plCount);

HRESULT CVIFUNC WMPLib_IWMPMedia3getAttributeName (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   long lIndex,
                                                   char **pbstrItemName);

HRESULT CVIFUNC WMPLib_IWMPMedia3getItemInfo (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo,
                                              const char *bstrItemName,
                                              char **pbstrVal);

HRESULT CVIFUNC WMPLib_IWMPMedia3setItemInfo (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo,
                                              const char *bstrItemName,
                                              const char *bstrVal);

HRESULT CVIFUNC WMPLib_IWMPMedia3getItemInfoByAtom (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    long lAtom, char **pbstrVal);

HRESULT CVIFUNC WMPLib_IWMPMedia3isMemberOf (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo,
                                             WMPLibObj_IWMPPlaylist pPlaylist,
                                             VBOOL *pvarfIsMemberOf);

HRESULT CVIFUNC WMPLib_IWMPMedia3isReadOnlyItem (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 const char *bstrItemName,
                                                 VBOOL *pvarfIsReadOnly);

HRESULT CVIFUNC WMPLib_IWMPMedia3GetError (CAObjHandle objectHandle,
                                           ERRORINFO *errorInfo,
                                           WMPLibObj_IWMPErrorItem *ppIWMPErrorItem);

HRESULT CVIFUNC WMPLib_IWMPMedia3getAttributeCountByType (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          const char *bstrType,
                                                          const char *bstrLanguage,
                                                          long *plCount);

HRESULT CVIFUNC WMPLib_IWMPMedia3getItemInfoByType (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    const char *bstrType,
                                                    const char *bstrLanguage,
                                                    long lIndex,
                                                    VARIANT *pvarValue);

HRESULT CVIFUNC WMPLib_NewIWMPMetadataPicture (int panel, const char *label,
                                               int top, int left, int *controlID,
                                               int *UILError);

HRESULT CVIFUNC WMPLib_OpenIWMPMetadataPicture (const char *fileName, int panel,
                                                const char *label, int top,
                                                int left, int *controlID,
                                                int *UILError);

HRESULT CVIFUNC WMPLib_IWMPMetadataPictureGetmimeType (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       char **pbstrMimeType);

HRESULT CVIFUNC WMPLib_IWMPMetadataPictureGetpictureType (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          char **pbstrPictureType);

HRESULT CVIFUNC WMPLib_IWMPMetadataPictureGetDescription (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          char **pbstrDescription);

HRESULT CVIFUNC WMPLib_IWMPMetadataPictureGetURL (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  char **pbstrURL);

HRESULT CVIFUNC WMPLib_NewIWMPMetadataText (int panel, const char *label,
                                            int top, int left, int *controlID,
                                            int *UILError);

HRESULT CVIFUNC WMPLib_OpenIWMPMetadataText (const char *fileName, int panel,
                                             const char *label, int top,
                                             int left, int *controlID,
                                             int *UILError);

HRESULT CVIFUNC WMPLib_IWMPMetadataTextGetDescription (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       char **pbstrDescription);

HRESULT CVIFUNC WMPLib_IWMPMetadataTextGettext (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                char **pbstrText);

HRESULT CVIFUNC WMPLib_NewIWMPSettings2 (int panel, const char *label, int top,
                                         int left, int *controlID, int *UILError);

HRESULT CVIFUNC WMPLib_OpenIWMPSettings2 (const char *fileName, int panel,
                                          const char *label, int top, int left,
                                          int *controlID, int *UILError);

HRESULT CVIFUNC WMPLib_IWMPSettings2GetisAvailable (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    const char *bstrItem,
                                                    VBOOL *pIsAvailable);

HRESULT CVIFUNC WMPLib_IWMPSettings2GetautoStart (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  VBOOL *pfAutoStart);

HRESULT CVIFUNC WMPLib_IWMPSettings2SetautoStart (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  VBOOL pfAutoStart);

HRESULT CVIFUNC WMPLib_IWMPSettings2GetbaseURL (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                char **pbstrBaseURL);

HRESULT CVIFUNC WMPLib_IWMPSettings2SetbaseURL (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                const char *pbstrBaseURL);

HRESULT CVIFUNC WMPLib_IWMPSettings2GetdefaultFrame (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     char **pbstrDefaultFrame);

HRESULT CVIFUNC WMPLib_IWMPSettings2SetdefaultFrame (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     const char *pbstrDefaultFrame);

HRESULT CVIFUNC WMPLib_IWMPSettings2GetinvokeURLs (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   VBOOL *pfInvokeURLs);

HRESULT CVIFUNC WMPLib_IWMPSettings2SetinvokeURLs (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   VBOOL pfInvokeURLs);

HRESULT CVIFUNC WMPLib_IWMPSettings2Getmute (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo, VBOOL *pfMute);

HRESULT CVIFUNC WMPLib_IWMPSettings2Setmute (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo, VBOOL pfMute);

HRESULT CVIFUNC WMPLib_IWMPSettings2GetplayCount (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  long *plCount);

HRESULT CVIFUNC WMPLib_IWMPSettings2SetplayCount (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  long plCount);

HRESULT CVIFUNC WMPLib_IWMPSettings2Getrate (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo,
                                             double *pdRate);

HRESULT CVIFUNC WMPLib_IWMPSettings2Setrate (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo, double pdRate);

HRESULT CVIFUNC WMPLib_IWMPSettings2Getbalance (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                long *plBalance);

HRESULT CVIFUNC WMPLib_IWMPSettings2Setbalance (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                long plBalance);

HRESULT CVIFUNC WMPLib_IWMPSettings2Getvolume (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo,
                                               long *plVolume);

HRESULT CVIFUNC WMPLib_IWMPSettings2Setvolume (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo,
                                               long plVolume);

HRESULT CVIFUNC WMPLib_IWMPSettings2getMode (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo,
                                             const char *bstrMode,
                                             VBOOL *pvarfMode);

HRESULT CVIFUNC WMPLib_IWMPSettings2setMode (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo,
                                             const char *bstrMode,
                                             VBOOL varfMode);

HRESULT CVIFUNC WMPLib_IWMPSettings2GetenableErrorDialogs (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           VBOOL *pfEnableErrorDialogs);

HRESULT CVIFUNC WMPLib_IWMPSettings2SetenableErrorDialogs (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           VBOOL pfEnableErrorDialogs);

HRESULT CVIFUNC WMPLib_IWMPSettings2GetdefaultAudioLanguage (CAObjHandle objectHandle,
                                                             ERRORINFO *errorInfo,
                                                             long *plLangID);

HRESULT CVIFUNC WMPLib_IWMPSettings2GetmediaAccessRights (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          char **pbstrRights);

HRESULT CVIFUNC WMPLib_IWMPSettings2requestMediaAccessRights (CAObjHandle objectHandle,
                                                              ERRORINFO *errorInfo,
                                                              const char *bstrDesiredAccess,
                                                              VBOOL *pvbAccepted);

HRESULT CVIFUNC WMPLib_NewIWMPControls3 (int panel, const char *label, int top,
                                         int left, int *controlID, int *UILError);

HRESULT CVIFUNC WMPLib_OpenIWMPControls3 (const char *fileName, int panel,
                                          const char *label, int top, int left,
                                          int *controlID, int *UILError);

HRESULT CVIFUNC WMPLib_IWMPControls3GetisAvailable (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    const char *bstrItem,
                                                    VBOOL *pIsAvailable);

HRESULT CVIFUNC WMPLib_IWMPControls3play (CAObjHandle objectHandle,
                                          ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPControls3stop (CAObjHandle objectHandle,
                                          ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPControls3pause (CAObjHandle objectHandle,
                                           ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPControls3fastForward (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPControls3fastReverse (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPControls3GetcurrentPosition (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        double *pdCurrentPosition);

HRESULT CVIFUNC WMPLib_IWMPControls3SetcurrentPosition (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        double pdCurrentPosition);

HRESULT CVIFUNC WMPLib_IWMPControls3GetcurrentPositionString (CAObjHandle objectHandle,
                                                              ERRORINFO *errorInfo,
                                                              char **pbstrCurrentPosition);

HRESULT CVIFUNC WMPLib_IWMPControls3next (CAObjHandle objectHandle,
                                          ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPControls3previous (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPControls3GetcurrentItem (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    WMPLibObj_IWMPMedia *ppIWMPMedia);

HRESULT CVIFUNC WMPLib_IWMPControls3SetcurrentItem (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    WMPLibObj_IWMPMedia ppIWMPMedia);

HRESULT CVIFUNC WMPLib_IWMPControls3GetcurrentMarker (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      long *plMarker);

HRESULT CVIFUNC WMPLib_IWMPControls3SetcurrentMarker (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      long plMarker);

HRESULT CVIFUNC WMPLib_IWMPControls3playItem (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo,
                                              WMPLibObj_IWMPMedia pIWMPMedia);

HRESULT CVIFUNC WMPLib_IWMPControls3step (CAObjHandle objectHandle,
                                          ERRORINFO *errorInfo, long lStep);

HRESULT CVIFUNC WMPLib_IWMPControls3GetaudioLanguageCount (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           long *plCount);

HRESULT CVIFUNC WMPLib_IWMPControls3getAudioLanguageID (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        long lIndex,
                                                        long *plLangID);

HRESULT CVIFUNC WMPLib_IWMPControls3getAudioLanguageDescription (CAObjHandle objectHandle,
                                                                 ERRORINFO *errorInfo,
                                                                 long lIndex,
                                                                 char **pbstrLangDesc);

HRESULT CVIFUNC WMPLib_IWMPControls3GetcurrentAudioLanguage (CAObjHandle objectHandle,
                                                             ERRORINFO *errorInfo,
                                                             long *plLangID);

HRESULT CVIFUNC WMPLib_IWMPControls3SetcurrentAudioLanguage (CAObjHandle objectHandle,
                                                             ERRORINFO *errorInfo,
                                                             long plLangID);

HRESULT CVIFUNC WMPLib_IWMPControls3GetcurrentAudioLanguageIndex (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo,
                                                                  long *plIndex);

HRESULT CVIFUNC WMPLib_IWMPControls3SetcurrentAudioLanguageIndex (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo,
                                                                  long plIndex);

HRESULT CVIFUNC WMPLib_IWMPControls3getLanguageName (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     long lLangID,
                                                     char **pbstrLangName);

HRESULT CVIFUNC WMPLib_IWMPControls3GetcurrentPositionTimecode (CAObjHandle objectHandle,
                                                                ERRORINFO *errorInfo,
                                                                char **bstrTimecode);

HRESULT CVIFUNC WMPLib_IWMPControls3SetcurrentPositionTimecode (CAObjHandle objectHandle,
                                                                ERRORINFO *errorInfo,
                                                                const char *bstrTimecode);

HRESULT CVIFUNC WMPLib_NewIWMPClosedCaption2 (int panel, const char *label,
                                              int top, int left, int *controlID,
                                              int *UILError);

HRESULT CVIFUNC WMPLib_OpenIWMPClosedCaption2 (const char *fileName, int panel,
                                               const char *label, int top,
                                               int left, int *controlID,
                                               int *UILError);

HRESULT CVIFUNC WMPLib_IWMPClosedCaption2GetSAMIStyle (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       char **pbstrSAMIStyle);

HRESULT CVIFUNC WMPLib_IWMPClosedCaption2SetSAMIStyle (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       const char *pbstrSAMIStyle);

HRESULT CVIFUNC WMPLib_IWMPClosedCaption2GetSAMILang (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      char **pbstrSAMILang);

HRESULT CVIFUNC WMPLib_IWMPClosedCaption2SetSAMILang (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      const char *pbstrSAMILang);

HRESULT CVIFUNC WMPLib_IWMPClosedCaption2GetSAMIFileName (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          char **pbstrSAMIFileName);

HRESULT CVIFUNC WMPLib_IWMPClosedCaption2SetSAMIFileName (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          const char *pbstrSAMIFileName);

HRESULT CVIFUNC WMPLib_IWMPClosedCaption2GetcaptioningId (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          char **pbstrCaptioningID);

HRESULT CVIFUNC WMPLib_IWMPClosedCaption2SetcaptioningId (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          const char *pbstrCaptioningID);

HRESULT CVIFUNC WMPLib_IWMPClosedCaption2GetSAMILangCount (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           long *plCount);

HRESULT CVIFUNC WMPLib_IWMPClosedCaption2getSAMILangName (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          long nIndex,
                                                          char **pbstrName);

HRESULT CVIFUNC WMPLib_IWMPClosedCaption2getSAMILangID (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        long nIndex,
                                                        long *plLangID);

HRESULT CVIFUNC WMPLib_IWMPClosedCaption2GetSAMIStyleCount (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo,
                                                            long *plCount);

HRESULT CVIFUNC WMPLib_IWMPClosedCaption2getSAMIStyleName (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           long nIndex,
                                                           char **pbstrName);

HRESULT CVIFUNC WMPLib_NewIWMPMediaCollection2 (int panel, const char *label,
                                                int top, int left,
                                                int *controlID, int *UILError);

HRESULT CVIFUNC WMPLib_OpenIWMPMediaCollection2 (const char *fileName, int panel,
                                                 const char *label, int top,
                                                 int left, int *controlID,
                                                 int *UILError);

HRESULT CVIFUNC WMPLib_IWMPMediaCollection2add (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                const char *bstrURL,
                                                WMPLibObj_IWMPMedia *ppItem);

HRESULT CVIFUNC WMPLib_IWMPMediaCollection2getAll (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   WMPLibObj_IWMPPlaylist *ppMediaItems);

HRESULT CVIFUNC WMPLib_IWMPMediaCollection2getByName (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      const char *bstrName,
                                                      WMPLibObj_IWMPPlaylist *ppMediaItems);

HRESULT CVIFUNC WMPLib_IWMPMediaCollection2getByGenre (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       const char *bstrGenre,
                                                       WMPLibObj_IWMPPlaylist *ppMediaItems);

HRESULT CVIFUNC WMPLib_IWMPMediaCollection2getByAuthor (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        const char *bstrAuthor,
                                                        WMPLibObj_IWMPPlaylist *ppMediaItems);

HRESULT CVIFUNC WMPLib_IWMPMediaCollection2getByAlbum (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       const char *bstrAlbum,
                                                       WMPLibObj_IWMPPlaylist *ppMediaItems);

HRESULT CVIFUNC WMPLib_IWMPMediaCollection2getByAttribute (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           const char *bstrAttribute,
                                                           const char *bstrValue,
                                                           WMPLibObj_IWMPPlaylist *ppMediaItems);

HRESULT CVIFUNC WMPLib_IWMPMediaCollection2remove (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   WMPLibObj_IWMPMedia pItem,
                                                   VBOOL varfDeleteFile);

HRESULT CVIFUNC WMPLib_IWMPMediaCollection2getAttributeStringCollection (CAObjHandle objectHandle,
                                                                         ERRORINFO *errorInfo,
                                                                         const char *bstrAttribute,
                                                                         const char *bstrMediaType,
                                                                         WMPLibObj_IWMPStringCollection *ppStringCollection);

HRESULT CVIFUNC WMPLib_IWMPMediaCollection2getMediaAtom (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         const char *bstrItemName,
                                                         long *plAtom);

HRESULT CVIFUNC WMPLib_IWMPMediaCollection2setDeleted (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       WMPLibObj_IWMPMedia pItem,
                                                       VBOOL varfIsDeleted);

HRESULT CVIFUNC WMPLib_IWMPMediaCollection2isDeleted (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      WMPLibObj_IWMPMedia pItem,
                                                      VBOOL *pvarfIsDeleted);

HRESULT CVIFUNC WMPLib_IWMPMediaCollection2createQuery (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        WMPLibObj_IWMPQuery *ppQuery);

HRESULT CVIFUNC WMPLib_IWMPMediaCollection2getPlaylistByQuery (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo,
                                                               WMPLibObj_IWMPQuery pQuery,
                                                               const char *bstrMediaType,
                                                               const char *bstrSortAttribute,
                                                               VBOOL fSortAscending,
                                                               WMPLibObj_IWMPPlaylist *ppPlaylist);

HRESULT CVIFUNC WMPLib_IWMPMediaCollection2getStringCollectionByQuery (CAObjHandle objectHandle,
                                                                       ERRORINFO *errorInfo,
                                                                       const char *bstrAttribute,
                                                                       WMPLibObj_IWMPQuery pQuery,
                                                                       const char *bstrMediaType,
                                                                       const char *bstrSortAttribute,
                                                                       VBOOL fSortAscending,
                                                                       WMPLibObj_IWMPStringCollection *ppStringCollection);

HRESULT CVIFUNC WMPLib_IWMPMediaCollection2getByAttributeAndMediaType (CAObjHandle objectHandle,
                                                                       ERRORINFO *errorInfo,
                                                                       const char *bstrAttribute,
                                                                       const char *bstrValue,
                                                                       const char *bstrMediaType,
                                                                       WMPLibObj_IWMPPlaylist *ppMediaItems);

HRESULT CVIFUNC WMPLib_NewIWMPStringCollection2 (int panel, const char *label,
                                                 int top, int left,
                                                 int *controlID, int *UILError);

HRESULT CVIFUNC WMPLib_OpenIWMPStringCollection2 (const char *fileName,
                                                  int panel, const char *label,
                                                  int top, int left,
                                                  int *controlID, int *UILError);

HRESULT CVIFUNC WMPLib_IWMPStringCollection2Getcount (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      long *plCount);

HRESULT CVIFUNC WMPLib_IWMPStringCollection2Item (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  long lIndex,
                                                  char **pbstrString);

HRESULT CVIFUNC WMPLib_IWMPStringCollection2isIdentical (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         WMPLibObj_IWMPStringCollection2 pIWMPStringCollection2,
                                                         VBOOL *pvbool);

HRESULT CVIFUNC WMPLib_IWMPStringCollection2getItemInfo (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         long lCollectionIndex,
                                                         const char *bstrItemName,
                                                         char **pbstrValue);

HRESULT CVIFUNC WMPLib_IWMPStringCollection2getAttributeCountByType (CAObjHandle objectHandle,
                                                                     ERRORINFO *errorInfo,
                                                                     long lCollectionIndex,
                                                                     const char *bstrType,
                                                                     const char *bstrLanguage,
                                                                     long *plCount);

HRESULT CVIFUNC WMPLib_IWMPStringCollection2getItemInfoByType (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo,
                                                               long lCollectionIndex,
                                                               const char *bstrType,
                                                               const char *bstrLanguage,
                                                               long lAttributeIndex,
                                                               VARIANT *pvarValue);

HRESULT CVIFUNC WMPLib_IWMPButtonCtrlGetimage (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo, char **pVal);

HRESULT CVIFUNC WMPLib_IWMPButtonCtrlSetimage (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo,
                                               const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPButtonCtrlGethoverImage (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    char **pVal);

HRESULT CVIFUNC WMPLib_IWMPButtonCtrlSethoverImage (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPButtonCtrlGetdownImage (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   char **pVal);

HRESULT CVIFUNC WMPLib_IWMPButtonCtrlSetdownImage (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPButtonCtrlGetdisabledImage (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       char **pVal);

HRESULT CVIFUNC WMPLib_IWMPButtonCtrlSetdisabledImage (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPButtonCtrlGethoverDownImage (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        char **pVal);

HRESULT CVIFUNC WMPLib_IWMPButtonCtrlSethoverDownImage (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPButtonCtrlGettiled (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo, VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPButtonCtrlSettiled (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo, VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPButtonCtrlGettransparencyColor (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           char **pVal);

HRESULT CVIFUNC WMPLib_IWMPButtonCtrlSettransparencyColor (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPButtonCtrlGetdown (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo, VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPButtonCtrlSetdown (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo, VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPButtonCtrlGetsticky (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPButtonCtrlSetsticky (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo, VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPButtonCtrlGetupToolTip (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   char **pVal);

HRESULT CVIFUNC WMPLib_IWMPButtonCtrlSetupToolTip (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPButtonCtrlGetdownToolTip (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     char **pVal);

HRESULT CVIFUNC WMPLib_IWMPButtonCtrlSetdownToolTip (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPButtonCtrlGetcursor (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                char **pVal);

HRESULT CVIFUNC WMPLib_IWMPButtonCtrlSetcursor (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPListBoxCtrlGetselectedItem (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       long *pnPos);

HRESULT CVIFUNC WMPLib_IWMPListBoxCtrlSetselectedItem (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       long pnPos);

HRESULT CVIFUNC WMPLib_IWMPListBoxCtrlGetsorted (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPListBoxCtrlSetsorted (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPListBoxCtrlGetmultiselect (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPListBoxCtrlSetmultiselect (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPListBoxCtrlGetreadOnly (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPListBoxCtrlSetreadOnly (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPListBoxCtrlGetforegroundColor (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          char **pVal);

HRESULT CVIFUNC WMPLib_IWMPListBoxCtrlSetforegroundColor (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPListBoxCtrlGetbackgroundColor (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          char **pVal);

HRESULT CVIFUNC WMPLib_IWMPListBoxCtrlSetbackgroundColor (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPListBoxCtrlGetfontSize (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   long *pVal);

HRESULT CVIFUNC WMPLib_IWMPListBoxCtrlSetfontSize (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   long pVal);

HRESULT CVIFUNC WMPLib_IWMPListBoxCtrlGetfontStyle (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    char **pVal);

HRESULT CVIFUNC WMPLib_IWMPListBoxCtrlSetfontStyle (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPListBoxCtrlGetfontFace (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   char **pVal);

HRESULT CVIFUNC WMPLib_IWMPListBoxCtrlSetfontFace (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPListBoxCtrlGetitemCount (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    long *pVal);

HRESULT CVIFUNC WMPLib_IWMPListBoxCtrlGetfirstVisibleItem (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           long *pVal);

HRESULT CVIFUNC WMPLib_IWMPListBoxCtrlSetfirstVisibleItem (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           long pVal);

HRESULT CVIFUNC WMPLib_IWMPListBoxCtrlSetpopUp (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                VBOOL newValue);

HRESULT CVIFUNC WMPLib_IWMPListBoxCtrlGetfocusItem (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    long *pVal);

HRESULT CVIFUNC WMPLib_IWMPListBoxCtrlSetfocusItem (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    long pVal);

HRESULT CVIFUNC WMPLib_IWMPListBoxCtrlGetborder (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPListBoxCtrlSetborder (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPListBoxCtrlgetItem (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo, long nPos,
                                               char **pVal);

HRESULT CVIFUNC WMPLib_IWMPListBoxCtrlinsertItem (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  long nPos, const char *newVal);

HRESULT CVIFUNC WMPLib_IWMPListBoxCtrlappendItem (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  const char *newVal);

HRESULT CVIFUNC WMPLib_IWMPListBoxCtrlreplaceItem (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   long nPos, const char *newVal);

HRESULT CVIFUNC WMPLib_IWMPListBoxCtrldeleteItem (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  long nPos);

HRESULT CVIFUNC WMPLib_IWMPListBoxCtrldeleteAll (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPListBoxCtrlfindItem (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                long nStartIndex,
                                                const char *newVal, long *pnPos);

HRESULT CVIFUNC WMPLib_IWMPListBoxCtrlgetNextSelectedItem (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           long nStartIndex,
                                                           long *pnSelected);

HRESULT CVIFUNC WMPLib_IWMPListBoxCtrlsetSelectedState (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        long nPos,
                                                        VBOOL vbSelected);

HRESULT CVIFUNC WMPLib_IWMPListBoxCtrlshow (CAObjHandle objectHandle,
                                            ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPListBoxCtrldismiss (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPSliderCtrlGetdirection (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   char **pVal);

HRESULT CVIFUNC WMPLib_IWMPSliderCtrlSetdirection (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPSliderCtrlGetslide (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo, VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPSliderCtrlSetslide (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo, VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPSliderCtrlGettiled (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo, VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPSliderCtrlSettiled (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo, VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPSliderCtrlGetforegroundColor (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         char **pVal);

HRESULT CVIFUNC WMPLib_IWMPSliderCtrlSetforegroundColor (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPSliderCtrlGetforegroundEndColor (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo,
                                                            char **pVal);

HRESULT CVIFUNC WMPLib_IWMPSliderCtrlSetforegroundEndColor (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo,
                                                            const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPSliderCtrlGetbackgroundColor (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         char **pVal);

HRESULT CVIFUNC WMPLib_IWMPSliderCtrlSetbackgroundColor (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPSliderCtrlGetbackgroundEndColor (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo,
                                                            char **pVal);

HRESULT CVIFUNC WMPLib_IWMPSliderCtrlSetbackgroundEndColor (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo,
                                                            const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPSliderCtrlGetdisabledColor (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       char **pVal);

HRESULT CVIFUNC WMPLib_IWMPSliderCtrlSetdisabledColor (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPSliderCtrlGettransparencyColor (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           char **pVal);

HRESULT CVIFUNC WMPLib_IWMPSliderCtrlSettransparencyColor (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPSliderCtrlGetforegroundImage (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         char **pVal);

HRESULT CVIFUNC WMPLib_IWMPSliderCtrlSetforegroundImage (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPSliderCtrlGetbackgroundImage (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         char **pVal);

HRESULT CVIFUNC WMPLib_IWMPSliderCtrlSetbackgroundImage (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPSliderCtrlGetbackgroundHoverImage (CAObjHandle objectHandle,
                                                              ERRORINFO *errorInfo,
                                                              char **pVal);

HRESULT CVIFUNC WMPLib_IWMPSliderCtrlSetbackgroundHoverImage (CAObjHandle objectHandle,
                                                              ERRORINFO *errorInfo,
                                                              const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPSliderCtrlGetdisabledImage (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       char **pVal);

HRESULT CVIFUNC WMPLib_IWMPSliderCtrlSetdisabledImage (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPSliderCtrlGetthumbImage (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    char **pVal);

HRESULT CVIFUNC WMPLib_IWMPSliderCtrlSetthumbImage (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPSliderCtrlGetthumbHoverImage (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         char **pVal);

HRESULT CVIFUNC WMPLib_IWMPSliderCtrlSetthumbHoverImage (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPSliderCtrlGetthumbDownImage (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        char **pVal);

HRESULT CVIFUNC WMPLib_IWMPSliderCtrlSetthumbDownImage (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPSliderCtrlGetthumbDisabledImage (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo,
                                                            char **pVal);

HRESULT CVIFUNC WMPLib_IWMPSliderCtrlSetthumbDisabledImage (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo,
                                                            const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPSliderCtrlGetmin (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo, float *pVal);

HRESULT CVIFUNC WMPLib_IWMPSliderCtrlSetmin (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo, float pVal);

HRESULT CVIFUNC WMPLib_IWMPSliderCtrlGetmax (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo, float *pVal);

HRESULT CVIFUNC WMPLib_IWMPSliderCtrlSetmax (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo, float pVal);

HRESULT CVIFUNC WMPLib_IWMPSliderCtrlGetvalue (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo, float *pVal);

HRESULT CVIFUNC WMPLib_IWMPSliderCtrlSetvalue (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo, float pVal);

HRESULT CVIFUNC WMPLib_IWMPSliderCtrlGettoolTip (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 char **pVal);

HRESULT CVIFUNC WMPLib_IWMPSliderCtrlSettoolTip (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPSliderCtrlGetcursor (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                char **pVal);

HRESULT CVIFUNC WMPLib_IWMPSliderCtrlSetcursor (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPSliderCtrlGetborderSize (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    long *pVal);

HRESULT CVIFUNC WMPLib_IWMPSliderCtrlSetborderSize (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    long pVal);

HRESULT CVIFUNC WMPLib_IWMPSliderCtrlGetforegroundHoverImage (CAObjHandle objectHandle,
                                                              ERRORINFO *errorInfo,
                                                              char **pVal);

HRESULT CVIFUNC WMPLib_IWMPSliderCtrlSetforegroundHoverImage (CAObjHandle objectHandle,
                                                              ERRORINFO *errorInfo,
                                                              const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPSliderCtrlGetforegroundProgress (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo,
                                                            float *pVal);

HRESULT CVIFUNC WMPLib_IWMPSliderCtrlSetforegroundProgress (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo,
                                                            float pVal);

HRESULT CVIFUNC WMPLib_IWMPSliderCtrlGetuseForegroundProgress (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo,
                                                               VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPSliderCtrlSetuseForegroundProgress (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo,
                                                               VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPVideoCtrlSetwindowless (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   VBOOL pbClipped);

HRESULT CVIFUNC WMPLib_IWMPVideoCtrlGetwindowless (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   VBOOL *pbClipped);

HRESULT CVIFUNC WMPLib_IWMPVideoCtrlSetcursor (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo,
                                               const char *pbstrCursor);

HRESULT CVIFUNC WMPLib_IWMPVideoCtrlGetcursor (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo,
                                               char **pbstrCursor);

HRESULT CVIFUNC WMPLib_IWMPVideoCtrlSetbackgroundColor (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        const char *pbstrColor);

HRESULT CVIFUNC WMPLib_IWMPVideoCtrlGetbackgroundColor (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        char **pbstrColor);

HRESULT CVIFUNC WMPLib_IWMPVideoCtrlSetmaintainAspectRatio (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo,
                                                            VBOOL pbMaintainAspectRatio);

HRESULT CVIFUNC WMPLib_IWMPVideoCtrlGetmaintainAspectRatio (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo,
                                                            VBOOL *pbMaintainAspectRatio);

HRESULT CVIFUNC WMPLib_IWMPVideoCtrlSettoolTip (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                const char *bstrToolTip);

HRESULT CVIFUNC WMPLib_IWMPVideoCtrlGettoolTip (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                char **bstrToolTip);

HRESULT CVIFUNC WMPLib_IWMPVideoCtrlGetfullScreen (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   VBOOL *pbFullScreen);

HRESULT CVIFUNC WMPLib_IWMPVideoCtrlSetfullScreen (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   VBOOL pbFullScreen);

HRESULT CVIFUNC WMPLib_IWMPVideoCtrlSetshrinkToFit (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    VBOOL pbShrinkToFit);

HRESULT CVIFUNC WMPLib_IWMPVideoCtrlGetshrinkToFit (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    VBOOL *pbShrinkToFit);

HRESULT CVIFUNC WMPLib_IWMPVideoCtrlSetstretchToFit (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     VBOOL pbStretchToFit);

HRESULT CVIFUNC WMPLib_IWMPVideoCtrlGetstretchToFit (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     VBOOL *pbStretchToFit);

HRESULT CVIFUNC WMPLib_IWMPVideoCtrlSetzoom (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo, long pzoom);

HRESULT CVIFUNC WMPLib_IWMPVideoCtrlGetzoom (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo, long *pzoom);

HRESULT CVIFUNC WMPLib_IWMPEffectsCtrlGetwindowed (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPEffectsCtrlSetwindowed (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPEffectsCtrlGetallowAll (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPEffectsCtrlSetallowAll (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPEffectsCtrlSetcurrentEffectType (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo,
                                                            const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPEffectsCtrlGetcurrentEffectType (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo,
                                                            char **pVal);

HRESULT CVIFUNC WMPLib_IWMPEffectsCtrlGetcurrentEffectTitle (CAObjHandle objectHandle,
                                                             ERRORINFO *errorInfo,
                                                             char **pVal);

HRESULT CVIFUNC WMPLib_IWMPEffectsCtrlnext (CAObjHandle objectHandle,
                                            ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPEffectsCtrlprevious (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPEffectsCtrlsettings (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPEffectsCtrlGetcurrentEffect (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        CAObjHandle *p);

HRESULT CVIFUNC WMPLib_IWMPEffectsCtrlSetcurrentEffect (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        CAObjHandle p);

HRESULT CVIFUNC WMPLib_IWMPEffectsCtrlnextEffect (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPEffectsCtrlpreviousEffect (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPEffectsCtrlnextPreset (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPEffectsCtrlpreviousPreset (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPEffectsCtrlGetcurrentPreset (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        long *pVal);

HRESULT CVIFUNC WMPLib_IWMPEffectsCtrlSetcurrentPreset (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        long pVal);

HRESULT CVIFUNC WMPLib_IWMPEffectsCtrlGetcurrentPresetTitle (CAObjHandle objectHandle,
                                                             ERRORINFO *errorInfo,
                                                             char **pVal);

HRESULT CVIFUNC WMPLib_IWMPEffectsCtrlGetcurrentEffectPresetCount (CAObjHandle objectHandle,
                                                                   ERRORINFO *errorInfo,
                                                                   long *pVal);

HRESULT CVIFUNC WMPLib_IWMPEffectsCtrlGetfullScreen (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     VBOOL *pbFullScreen);

HRESULT CVIFUNC WMPLib_IWMPEffectsCtrlSetfullScreen (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     VBOOL pbFullScreen);

HRESULT CVIFUNC WMPLib_IWMPEffectsCtrlGeteffectCanGoFullScreen (CAObjHandle objectHandle,
                                                                ERRORINFO *errorInfo,
                                                                VBOOL *pbFullScreen);

HRESULT CVIFUNC WMPLib_IWMPEffectsCtrlGeteffectHasPropertyPage (CAObjHandle objectHandle,
                                                                ERRORINFO *errorInfo,
                                                                VBOOL *pbPropertyPage);

HRESULT CVIFUNC WMPLib_IWMPEffectsCtrlGeteffectCount (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      long *pVal);

HRESULT CVIFUNC WMPLib_IWMPEffectsCtrlGeteffectTitle (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      long index, char **pVal);

HRESULT CVIFUNC WMPLib_IWMPEffectsCtrlGeteffectType (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     long index, char **pVal);

HRESULT CVIFUNC WMPLib_IWMPEqualizerSettingsCtrlGetbypass (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPEqualizerSettingsCtrlSetbypass (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPEqualizerSettingsCtrlGetgainLevel1 (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo,
                                                               float *pflLevel);

HRESULT CVIFUNC WMPLib_IWMPEqualizerSettingsCtrlSetgainLevel1 (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo,
                                                               float pflLevel);

HRESULT CVIFUNC WMPLib_IWMPEqualizerSettingsCtrlGetgainLevel2 (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo,
                                                               float *pflLevel);

HRESULT CVIFUNC WMPLib_IWMPEqualizerSettingsCtrlSetgainLevel2 (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo,
                                                               float pflLevel);

HRESULT CVIFUNC WMPLib_IWMPEqualizerSettingsCtrlGetgainLevel3 (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo,
                                                               float *pflLevel);

HRESULT CVIFUNC WMPLib_IWMPEqualizerSettingsCtrlSetgainLevel3 (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo,
                                                               float pflLevel);

HRESULT CVIFUNC WMPLib_IWMPEqualizerSettingsCtrlGetgainLevel4 (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo,
                                                               float *pflLevel);

HRESULT CVIFUNC WMPLib_IWMPEqualizerSettingsCtrlSetgainLevel4 (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo,
                                                               float pflLevel);

HRESULT CVIFUNC WMPLib_IWMPEqualizerSettingsCtrlGetgainLevel5 (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo,
                                                               float *pflLevel);

HRESULT CVIFUNC WMPLib_IWMPEqualizerSettingsCtrlSetgainLevel5 (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo,
                                                               float pflLevel);

HRESULT CVIFUNC WMPLib_IWMPEqualizerSettingsCtrlGetgainLevel6 (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo,
                                                               float *pflLevel);

HRESULT CVIFUNC WMPLib_IWMPEqualizerSettingsCtrlSetgainLevel6 (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo,
                                                               float pflLevel);

HRESULT CVIFUNC WMPLib_IWMPEqualizerSettingsCtrlGetgainLevel7 (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo,
                                                               float *pflLevel);

HRESULT CVIFUNC WMPLib_IWMPEqualizerSettingsCtrlSetgainLevel7 (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo,
                                                               float pflLevel);

HRESULT CVIFUNC WMPLib_IWMPEqualizerSettingsCtrlGetgainLevel8 (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo,
                                                               float *pflLevel);

HRESULT CVIFUNC WMPLib_IWMPEqualizerSettingsCtrlSetgainLevel8 (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo,
                                                               float pflLevel);

HRESULT CVIFUNC WMPLib_IWMPEqualizerSettingsCtrlGetgainLevel9 (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo,
                                                               float *pflLevel);

HRESULT CVIFUNC WMPLib_IWMPEqualizerSettingsCtrlSetgainLevel9 (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo,
                                                               float pflLevel);

HRESULT CVIFUNC WMPLib_IWMPEqualizerSettingsCtrlGetgainLevel10 (CAObjHandle objectHandle,
                                                                ERRORINFO *errorInfo,
                                                                float *pflLevel);

HRESULT CVIFUNC WMPLib_IWMPEqualizerSettingsCtrlSetgainLevel10 (CAObjHandle objectHandle,
                                                                ERRORINFO *errorInfo,
                                                                float pflLevel);

HRESULT CVIFUNC WMPLib_IWMPEqualizerSettingsCtrlGetgainLevels (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo,
                                                               long iIndex,
                                                               float *pflLevel);

HRESULT CVIFUNC WMPLib_IWMPEqualizerSettingsCtrlSetgainLevels (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo,
                                                               long iIndex,
                                                               float pflLevel);

HRESULT CVIFUNC WMPLib_IWMPEqualizerSettingsCtrlreset (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPEqualizerSettingsCtrlGetbands (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          long *pbands);

HRESULT CVIFUNC WMPLib_IWMPEqualizerSettingsCtrlnextPreset (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPEqualizerSettingsCtrlpreviousPreset (CAObjHandle objectHandle,
                                                                ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPEqualizerSettingsCtrlGetcurrentPreset (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo,
                                                                  long *pVal);

HRESULT CVIFUNC WMPLib_IWMPEqualizerSettingsCtrlSetcurrentPreset (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo,
                                                                  long pVal);

HRESULT CVIFUNC WMPLib_IWMPEqualizerSettingsCtrlGetcurrentPresetTitle (CAObjHandle objectHandle,
                                                                       ERRORINFO *errorInfo,
                                                                       char **pVal);

HRESULT CVIFUNC WMPLib_IWMPEqualizerSettingsCtrlGetpresetCount (CAObjHandle objectHandle,
                                                                ERRORINFO *errorInfo,
                                                                long *pVal);

HRESULT CVIFUNC WMPLib_IWMPEqualizerSettingsCtrlGetenhancedAudio (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo,
                                                                  VBOOL *pfVal);

HRESULT CVIFUNC WMPLib_IWMPEqualizerSettingsCtrlSetenhancedAudio (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo,
                                                                  VBOOL pfVal);

HRESULT CVIFUNC WMPLib_IWMPEqualizerSettingsCtrlGetspeakerSize (CAObjHandle objectHandle,
                                                                ERRORINFO *errorInfo,
                                                                long *plVal);

HRESULT CVIFUNC WMPLib_IWMPEqualizerSettingsCtrlSetspeakerSize (CAObjHandle objectHandle,
                                                                ERRORINFO *errorInfo,
                                                                long plVal);

HRESULT CVIFUNC WMPLib_IWMPEqualizerSettingsCtrlGetcurrentSpeakerName (CAObjHandle objectHandle,
                                                                       ERRORINFO *errorInfo,
                                                                       char **pbstrName);

HRESULT CVIFUNC WMPLib_IWMPEqualizerSettingsCtrlGettruBassLevel (CAObjHandle objectHandle,
                                                                 ERRORINFO *errorInfo,
                                                                 long *plTruBassLevel);

HRESULT CVIFUNC WMPLib_IWMPEqualizerSettingsCtrlSettruBassLevel (CAObjHandle objectHandle,
                                                                 ERRORINFO *errorInfo,
                                                                 long plTruBassLevel);

HRESULT CVIFUNC WMPLib_IWMPEqualizerSettingsCtrlGetwowLevel (CAObjHandle objectHandle,
                                                             ERRORINFO *errorInfo,
                                                             long *plWowLevel);

HRESULT CVIFUNC WMPLib_IWMPEqualizerSettingsCtrlSetwowLevel (CAObjHandle objectHandle,
                                                             ERRORINFO *errorInfo,
                                                             long plWowLevel);

HRESULT CVIFUNC WMPLib_IWMPEqualizerSettingsCtrlGetsplineTension (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo,
                                                                  float *pflSplineTension);

HRESULT CVIFUNC WMPLib_IWMPEqualizerSettingsCtrlSetsplineTension (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo,
                                                                  float pflSplineTension);

HRESULT CVIFUNC WMPLib_IWMPEqualizerSettingsCtrlGetenableSplineTension (CAObjHandle objectHandle,
                                                                        ERRORINFO *errorInfo,
                                                                        VBOOL *pfEnableSplineTension);

HRESULT CVIFUNC WMPLib_IWMPEqualizerSettingsCtrlSetenableSplineTension (CAObjHandle objectHandle,
                                                                        ERRORINFO *errorInfo,
                                                                        VBOOL pfEnableSplineTension);

HRESULT CVIFUNC WMPLib_IWMPEqualizerSettingsCtrlGetpresetTitle (CAObjHandle objectHandle,
                                                                ERRORINFO *errorInfo,
                                                                long iIndex,
                                                                char **pVal);

HRESULT CVIFUNC WMPLib_IWMPEqualizerSettingsCtrlGetnormalization (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo,
                                                                  VBOOL *pfVal);

HRESULT CVIFUNC WMPLib_IWMPEqualizerSettingsCtrlSetnormalization (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo,
                                                                  VBOOL pfVal);

HRESULT CVIFUNC WMPLib_IWMPEqualizerSettingsCtrlGetnormalizationAverage (CAObjHandle objectHandle,
                                                                         ERRORINFO *errorInfo,
                                                                         float *pflAverage);

HRESULT CVIFUNC WMPLib_IWMPEqualizerSettingsCtrlGetnormalizationPeak (CAObjHandle objectHandle,
                                                                      ERRORINFO *errorInfo,
                                                                      float *pflPeak);

HRESULT CVIFUNC WMPLib_IWMPEqualizerSettingsCtrlGetcrossFade (CAObjHandle objectHandle,
                                                              ERRORINFO *errorInfo,
                                                              VBOOL *pfVal);

HRESULT CVIFUNC WMPLib_IWMPEqualizerSettingsCtrlSetcrossFade (CAObjHandle objectHandle,
                                                              ERRORINFO *errorInfo,
                                                              VBOOL pfVal);

HRESULT CVIFUNC WMPLib_IWMPEqualizerSettingsCtrlGetcrossFadeWindow (CAObjHandle objectHandle,
                                                                    ERRORINFO *errorInfo,
                                                                    long *plWindow);

HRESULT CVIFUNC WMPLib_IWMPEqualizerSettingsCtrlSetcrossFadeWindow (CAObjHandle objectHandle,
                                                                    ERRORINFO *errorInfo,
                                                                    long plWindow);

HRESULT CVIFUNC WMPLib_IWMPVideoSettingsCtrlGetbrightness (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           long *pVal);

HRESULT CVIFUNC WMPLib_IWMPVideoSettingsCtrlSetbrightness (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           long pVal);

HRESULT CVIFUNC WMPLib_IWMPVideoSettingsCtrlGetcontrast (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         long *pVal);

HRESULT CVIFUNC WMPLib_IWMPVideoSettingsCtrlSetcontrast (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         long pVal);

HRESULT CVIFUNC WMPLib_IWMPVideoSettingsCtrlGethue (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    long *pVal);

HRESULT CVIFUNC WMPLib_IWMPVideoSettingsCtrlSethue (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    long pVal);

HRESULT CVIFUNC WMPLib_IWMPVideoSettingsCtrlGetsaturation (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           long *pVal);

HRESULT CVIFUNC WMPLib_IWMPVideoSettingsCtrlSetsaturation (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           long pVal);

HRESULT CVIFUNC WMPLib_IWMPVideoSettingsCtrlreset (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPLibraryTreeCtrlGetdropDownVisible (CAObjHandle objectHandle,
                                                              ERRORINFO *errorInfo,
                                                              VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPLibraryTreeCtrlSetdropDownVisible (CAObjHandle objectHandle,
                                                              ERRORINFO *errorInfo,
                                                              VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPLibraryTreeCtrlGetforegroundColor (CAObjHandle objectHandle,
                                                              ERRORINFO *errorInfo,
                                                              char **pVal);

HRESULT CVIFUNC WMPLib_IWMPLibraryTreeCtrlSetforegroundColor (CAObjHandle objectHandle,
                                                              ERRORINFO *errorInfo,
                                                              const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPLibraryTreeCtrlGetbackgroundColor (CAObjHandle objectHandle,
                                                              ERRORINFO *errorInfo,
                                                              char **pVal);

HRESULT CVIFUNC WMPLib_IWMPLibraryTreeCtrlSetbackgroundColor (CAObjHandle objectHandle,
                                                              ERRORINFO *errorInfo,
                                                              const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPLibraryTreeCtrlGetfontSize (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       long *pVal);

HRESULT CVIFUNC WMPLib_IWMPLibraryTreeCtrlSetfontSize (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       long pVal);

HRESULT CVIFUNC WMPLib_IWMPLibraryTreeCtrlGetfontStyle (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        char **pVal);

HRESULT CVIFUNC WMPLib_IWMPLibraryTreeCtrlSetfontStyle (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPLibraryTreeCtrlGetfontFace (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       char **pVal);

HRESULT CVIFUNC WMPLib_IWMPLibraryTreeCtrlSetfontFace (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPLibraryTreeCtrlGetfilter (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     char **pVal);

HRESULT CVIFUNC WMPLib_IWMPLibraryTreeCtrlSetfilter (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPLibraryTreeCtrlGetexpandState (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          char **pVal);

HRESULT CVIFUNC WMPLib_IWMPLibraryTreeCtrlSetexpandState (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPLibraryTreeCtrlGetPlaylist (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       WMPLibObj_IWMPPlaylist *ppPlaylist);

HRESULT CVIFUNC WMPLib_IWMPLibraryTreeCtrlSetPlaylist (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       WMPLibObj_IWMPPlaylist ppPlaylist);

HRESULT CVIFUNC WMPLib_IWMPLibraryTreeCtrlGetselectedPlaylist (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo,
                                                               WMPLibObj_IWMPPlaylist *ppPlaylist);

HRESULT CVIFUNC WMPLib_IWMPLibraryTreeCtrlGetselectedMedia (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo,
                                                            WMPLibObj_IWMPMedia *ppMedia);

HRESULT CVIFUNC WMPLib_IWMPEditCtrlGetvalue (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo, char **pVal);

HRESULT CVIFUNC WMPLib_IWMPEditCtrlSetvalue (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo,
                                             const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPEditCtrlGetborder (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo, VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPEditCtrlSetborder (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo, VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPEditCtrlGetjustification (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     char **pVal);

HRESULT CVIFUNC WMPLib_IWMPEditCtrlSetjustification (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPEditCtrlGeteditStyle (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 char **pVal);

HRESULT CVIFUNC WMPLib_IWMPEditCtrlSeteditStyle (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPEditCtrlGetwordWrap (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPEditCtrlSetwordWrap (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo, VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPEditCtrlGetreadOnly (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPEditCtrlSetreadOnly (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo, VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPEditCtrlGetforegroundColor (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       char **pVal);

HRESULT CVIFUNC WMPLib_IWMPEditCtrlSetforegroundColor (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPEditCtrlGetbackgroundColor (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       char **pVal);

HRESULT CVIFUNC WMPLib_IWMPEditCtrlSetbackgroundColor (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPEditCtrlGetfontSize (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo, long *pVal);

HRESULT CVIFUNC WMPLib_IWMPEditCtrlSetfontSize (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo, long pVal);

HRESULT CVIFUNC WMPLib_IWMPEditCtrlGetfontStyle (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 char **pVal);

HRESULT CVIFUNC WMPLib_IWMPEditCtrlSetfontStyle (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPEditCtrlGetfontFace (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                char **pVal);

HRESULT CVIFUNC WMPLib_IWMPEditCtrlSetfontFace (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPEditCtrlGettextLimit (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 long *pVal);

HRESULT CVIFUNC WMPLib_IWMPEditCtrlSettextLimit (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo, long pVal);

HRESULT CVIFUNC WMPLib_IWMPEditCtrlGetlineCount (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 long *pVal);

HRESULT CVIFUNC WMPLib_IWMPEditCtrlgetLine (CAObjHandle objectHandle,
                                            ERRORINFO *errorInfo, long nIndex,
                                            char **pVal);

HRESULT CVIFUNC WMPLib_IWMPEditCtrlgetSelectionStart (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      long *pnStart);

HRESULT CVIFUNC WMPLib_IWMPEditCtrlgetSelectionEnd (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    long *pnEnd);

HRESULT CVIFUNC WMPLib_IWMPEditCtrlsetSelection (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 long nStart, long nEnd);

HRESULT CVIFUNC WMPLib_IWMPEditCtrlreplaceSelection (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     const char *newVal);

HRESULT CVIFUNC WMPLib_IWMPEditCtrlgetLineIndex (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 long nIndex, long *pnPosition);

HRESULT CVIFUNC WMPLib_IWMPEditCtrlgetLineFromChar (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    long nPosition, long *pnLine);

HRESULT CVIFUNC WMPLib_IWMPSkinListupdateBasketColumns (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPSkinListhighContrastChange (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPMenuCtrldeleteAllItems (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPMenuCtrlappendItem (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo, long nID,
                                               const char *bstrItem);

HRESULT CVIFUNC WMPLib_IWMPMenuCtrlappendSeparator (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPMenuCtrlenableItem (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo, long nID,
                                               VBOOL newVal);

HRESULT CVIFUNC WMPLib_IWMPMenuCtrlcheckItem (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo, long nID,
                                              VBOOL newVal);

HRESULT CVIFUNC WMPLib_IWMPMenuCtrlcheckRadioItem (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   long nID, VBOOL newVal);

HRESULT CVIFUNC WMPLib_IWMPMenuCtrlGetshowFlags (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 long *pVal);

HRESULT CVIFUNC WMPLib_IWMPMenuCtrlSetshowFlags (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo, long pVal);

HRESULT CVIFUNC WMPLib_IWMPMenuCtrlshow (CAObjHandle objectHandle,
                                         ERRORINFO *errorInfo, long *pnID);

HRESULT CVIFUNC WMPLib_IWMPMenuCtrlshowEx (CAObjHandle objectHandle,
                                           ERRORINFO *errorInfo, long nID);

HRESULT CVIFUNC WMPLib_IWMPAutoMenuCtrlshow (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo,
                                             const char *newVal);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonCtrlGetimage (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       char **pVal);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonCtrlSetimage (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonCtrlGethoverImage (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo,
                                                            char **pVal);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonCtrlSethoverImage (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo,
                                                            const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonCtrlGetdownImage (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           char **pVal);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonCtrlSetdownImage (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonCtrlGethoverDownImage (CAObjHandle objectHandle,
                                                                ERRORINFO *errorInfo,
                                                                char **pVal);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonCtrlSethoverDownImage (CAObjHandle objectHandle,
                                                                ERRORINFO *errorInfo,
                                                                const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonCtrlGethoverHoverImage (CAObjHandle objectHandle,
                                                                 ERRORINFO *errorInfo,
                                                                 char **pVal);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonCtrlSethoverHoverImage (CAObjHandle objectHandle,
                                                                 ERRORINFO *errorInfo,
                                                                 const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonCtrlGetdisabledImage (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo,
                                                               char **pVal);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonCtrlSetdisabledImage (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo,
                                                               const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonCtrlGetmappingImage (CAObjHandle objectHandle,
                                                              ERRORINFO *errorInfo,
                                                              char **pVal);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonCtrlSetmappingImage (CAObjHandle objectHandle,
                                                              ERRORINFO *errorInfo,
                                                              const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonCtrlGettransparencyColor (CAObjHandle objectHandle,
                                                                   ERRORINFO *errorInfo,
                                                                   char **pVal);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonCtrlSettransparencyColor (CAObjHandle objectHandle,
                                                                   ERRORINFO *errorInfo,
                                                                   const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonCtrlGetcursor (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        char **pVal);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonCtrlSetcursor (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonCtrlGetshowBackground (CAObjHandle objectHandle,
                                                                ERRORINFO *errorInfo,
                                                                VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonCtrlSetshowBackground (CAObjHandle objectHandle,
                                                                ERRORINFO *errorInfo,
                                                                VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonCtrlGetradio (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonCtrlSetradio (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonCtrlGetbuttonCount (CAObjHandle objectHandle,
                                                             ERRORINFO *errorInfo,
                                                             long *nButtons);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonCtrlcreateButton (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           CAObjHandle *pButton);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonCtrlgetButton (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        long nButton,
                                                        CAObjHandle *pButton);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonCtrlClick (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    long nButton);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonCtrlGethueShift (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          float *pVal);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonCtrlSethueShift (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          float pVal);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonCtrlGetsaturation (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo,
                                                            float *pVal);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonCtrlSetsaturation (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo,
                                                            float pVal);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonGetupToolTip (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       char **pVal);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonSetupToolTip (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonGetdownToolTip (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         char **pVal);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonSetdownToolTip (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonGetmappingColor (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          char **pVal);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonSetmappingColor (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonGetenabled (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonSetenabled (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonGetsticky (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonSetsticky (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonGetdown (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonSetdown (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonGetindex (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   long *pVal);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonGettabStop (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonSettabStop (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonGetcursor (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    char **pVal);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonSetcursor (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonClick (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonGetaccName (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     char **pszName);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonSetaccName (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     const char *pszName);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonGetaccDescription (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo,
                                                            char **pszDescription);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonSetaccDescription (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo,
                                                            const char *pszDescription);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonGetaccKeyboardShortcut (CAObjHandle objectHandle,
                                                                 ERRORINFO *errorInfo,
                                                                 char **pszShortcut);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonSetaccKeyboardShortcut (CAObjHandle objectHandle,
                                                                 ERRORINFO *errorInfo,
                                                                 const char *pszShortcut);

HRESULT CVIFUNC WMPLib_IWMPCustomSliderGetcursor (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  char **pVal);

HRESULT CVIFUNC WMPLib_IWMPCustomSliderSetcursor (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPCustomSliderGetmin (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo, float *pVal);

HRESULT CVIFUNC WMPLib_IWMPCustomSliderSetmin (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo, float pVal);

HRESULT CVIFUNC WMPLib_IWMPCustomSliderGetmax (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo, float *pVal);

HRESULT CVIFUNC WMPLib_IWMPCustomSliderSetmax (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo, float pVal);

HRESULT CVIFUNC WMPLib_IWMPCustomSliderGetvalue (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 float *pVal);

HRESULT CVIFUNC WMPLib_IWMPCustomSliderSetvalue (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 float pVal);

HRESULT CVIFUNC WMPLib_IWMPCustomSliderGettoolTip (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   char **pVal);

HRESULT CVIFUNC WMPLib_IWMPCustomSliderSettoolTip (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPCustomSliderGetpositionImage (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         char **pVal);

HRESULT CVIFUNC WMPLib_IWMPCustomSliderSetpositionImage (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPCustomSliderGetimage (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 char **pVal);

HRESULT CVIFUNC WMPLib_IWMPCustomSliderSetimage (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPCustomSliderGethoverImage (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      char **pVal);

HRESULT CVIFUNC WMPLib_IWMPCustomSliderSethoverImage (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPCustomSliderGetdisabledImage (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         char **pVal);

HRESULT CVIFUNC WMPLib_IWMPCustomSliderSetdisabledImage (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPCustomSliderGetdownImage (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     char **pVal);

HRESULT CVIFUNC WMPLib_IWMPCustomSliderSetdownImage (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPCustomSliderGettransparencyColor (CAObjHandle objectHandle,
                                                             ERRORINFO *errorInfo,
                                                             char **pVal);

HRESULT CVIFUNC WMPLib_IWMPCustomSliderSettransparencyColor (CAObjHandle objectHandle,
                                                             ERRORINFO *errorInfo,
                                                             const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPTextCtrlGetbackgroundColor (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       char **pVal);

HRESULT CVIFUNC WMPLib_IWMPTextCtrlSetbackgroundColor (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPTextCtrlGetfontFace (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                char **pVal);

HRESULT CVIFUNC WMPLib_IWMPTextCtrlSetfontFace (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPTextCtrlGetfontStyle (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 char **pVal);

HRESULT CVIFUNC WMPLib_IWMPTextCtrlSetfontStyle (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPTextCtrlGetfontSize (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo, long *pVal);

HRESULT CVIFUNC WMPLib_IWMPTextCtrlSetfontSize (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo, long pVal);

HRESULT CVIFUNC WMPLib_IWMPTextCtrlGetforegroundColor (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       char **pVal);

HRESULT CVIFUNC WMPLib_IWMPTextCtrlSetforegroundColor (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPTextCtrlGethoverBackgroundColor (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo,
                                                            char **pVal);

HRESULT CVIFUNC WMPLib_IWMPTextCtrlSethoverBackgroundColor (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo,
                                                            const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPTextCtrlGethoverForegroundColor (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo,
                                                            char **pVal);

HRESULT CVIFUNC WMPLib_IWMPTextCtrlSethoverForegroundColor (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo,
                                                            const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPTextCtrlGethoverFontStyle (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      char **pVal);

HRESULT CVIFUNC WMPLib_IWMPTextCtrlSethoverFontStyle (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPTextCtrlGetvalue (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo, char **pVal);

HRESULT CVIFUNC WMPLib_IWMPTextCtrlSetvalue (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo,
                                             const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPTextCtrlGettoolTip (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo, char **pVal);

HRESULT CVIFUNC WMPLib_IWMPTextCtrlSettoolTip (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo,
                                               const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPTextCtrlGetdisabledFontStyle (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         char **pVal);

HRESULT CVIFUNC WMPLib_IWMPTextCtrlSetdisabledFontStyle (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPTextCtrlGetdisabledForegroundColor (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo,
                                                               char **pVal);

HRESULT CVIFUNC WMPLib_IWMPTextCtrlSetdisabledForegroundColor (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo,
                                                               const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPTextCtrlGetdisabledBackgroundColor (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo,
                                                               char **pVal);

HRESULT CVIFUNC WMPLib_IWMPTextCtrlSetdisabledBackgroundColor (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo,
                                                               const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPTextCtrlGetfontSmoothing (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPTextCtrlSetfontSmoothing (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPTextCtrlGetjustification (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     char **pVal);

HRESULT CVIFUNC WMPLib_IWMPTextCtrlSetjustification (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPTextCtrlGetwordWrap (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPTextCtrlSetwordWrap (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo, VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPTextCtrlGetcursor (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo, char **pVal);

HRESULT CVIFUNC WMPLib_IWMPTextCtrlSetcursor (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo,
                                              const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPTextCtrlGetscrolling (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPTextCtrlSetscrolling (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPTextCtrlGetscrollingDirection (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          char **pVal);

HRESULT CVIFUNC WMPLib_IWMPTextCtrlSetscrollingDirection (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPTextCtrlGetscrollingDelay (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      long *pVal);

HRESULT CVIFUNC WMPLib_IWMPTextCtrlSetscrollingDelay (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      long pVal);

HRESULT CVIFUNC WMPLib_IWMPTextCtrlGetscrollingAmount (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       long *pVal);

HRESULT CVIFUNC WMPLib_IWMPTextCtrlSetscrollingAmount (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       long pVal);

HRESULT CVIFUNC WMPLib_IWMPTextCtrlGettextWidth (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 long *pVal);

HRESULT CVIFUNC WMPLib_IWMPTextCtrlGetonGlass (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo, VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPTextCtrlSetonGlass (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo, VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPTextCtrlGetdisableGlassBlurBackground (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo,
                                                                  VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPTextCtrlSetdisableGlassBlurBackground (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo,
                                                                  VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlGetPlaylist (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    WMPLibObj_IWMPPlaylist *ppdispPlaylist);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlSetPlaylist (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    WMPLibObj_IWMPPlaylist ppdispPlaylist);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlGetcolumns (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   char **pbstrColumns);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlSetcolumns (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   const char *pbstrColumns);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlGetcolumnCount (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       long *pVal);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlGetcolumnOrder (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       char **pbstrColumnOrder);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlSetcolumnOrder (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       const char *pbstrColumnOrder);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlGetcolumnsVisible (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlSetcolumnsVisible (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlGetdropDownVisible (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlSetdropDownVisible (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlGetplaylistItemsVisible (CAObjHandle objectHandle,
                                                                ERRORINFO *errorInfo,
                                                                VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlSetplaylistItemsVisible (CAObjHandle objectHandle,
                                                                ERRORINFO *errorInfo,
                                                                VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlGetcheckboxesVisible (CAObjHandle objectHandle,
                                                             ERRORINFO *errorInfo,
                                                             VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlSetcheckboxesVisible (CAObjHandle objectHandle,
                                                             ERRORINFO *errorInfo,
                                                             VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlGetbackgroundColor (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           char **pbstrColor);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlSetbackgroundColor (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           const char *pbstrColor);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlGetforegroundColor (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           char **pbstrColor);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlSetforegroundColor (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           const char *pbstrColor);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlGetdisabledItemColor (CAObjHandle objectHandle,
                                                             ERRORINFO *errorInfo,
                                                             char **pbstrColor);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlSetdisabledItemColor (CAObjHandle objectHandle,
                                                             ERRORINFO *errorInfo,
                                                             const char *pbstrColor);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlGetitemPlayingColor (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo,
                                                            char **pbstrColor);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlSetitemPlayingColor (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo,
                                                            const char *pbstrColor);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlGetitemPlayingBackgroundColor (CAObjHandle objectHandle,
                                                                      ERRORINFO *errorInfo,
                                                                      char **pbstrBackgroundColor);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlSetitemPlayingBackgroundColor (CAObjHandle objectHandle,
                                                                      ERRORINFO *errorInfo,
                                                                      const char *pbstrBackgroundColor);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlGetbackgroundImage (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           char **pbstrImage);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlSetbackgroundImage (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           const char *pbstrImage);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlGetallowItemEditing (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo,
                                                            VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlSetallowItemEditing (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo,
                                                            VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlGetallowColumnSorting (CAObjHandle objectHandle,
                                                              ERRORINFO *errorInfo,
                                                              VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlSetallowColumnSorting (CAObjHandle objectHandle,
                                                              ERRORINFO *errorInfo,
                                                              VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlGetdropDownList (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        char **pbstrList);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlSetdropDownList (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        const char *pbstrList);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlGetdropDownToolTip (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           char **pbstrToolTip);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlSetdropDownToolTip (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           const char *pbstrToolTip);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlGetcopying (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlSetcopying (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlcopy (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlabortCopy (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrldeleteSelected (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrldeleteSelectedFromLibrary (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlmoveSelectedUp (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlmoveSelectedDown (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrladdSelectedToPlaylist (CAObjHandle objectHandle,
                                                              ERRORINFO *errorInfo,
                                                              WMPLibObj_IWMPPlaylist pdispPlaylist);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlgetNextSelectedItem (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo,
                                                            long nStartIndex,
                                                            long *pnSelected);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlgetNextCheckedItem (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           long nStartIndex,
                                                           long *pnChecked);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlsetSelectedState (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         long nIndex,
                                                         VBOOL vbSelected);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlsetCheckedState (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        long nIndex,
                                                        VBOOL vbChecked);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlsortColumn (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   long nIndex);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlsetColumnResizeMode (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo,
                                                            long nIndex,
                                                            const char *newMode);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlsetColumnWidth (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       long nIndex, long nWidth);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlGetitemErrorColor (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          char **pbstrColor);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlSetitemErrorColor (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          const char *pbstrColor);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlGetitemCount (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     long *pnItemCount);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlGetitemMedia (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     long nIndex,
                                                     WMPLibObj_IWMPMedia *ppMedia);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlGetitemPlaylist (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        long nIndex,
                                                        WMPLibObj_IWMPPlaylist *ppPlaylist);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlgetNextSelectedItem2 (CAObjHandle objectHandle,
                                                             ERRORINFO *errorInfo,
                                                             long nStartIndex,
                                                             long *pnSelected);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlgetNextCheckedItem2 (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo,
                                                            long nStartIndex,
                                                            long *pnChecked);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlsetSelectedState2 (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          long nIndex,
                                                          VBOOL vbSelected);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlsetCheckedState2 (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         long nIndex,
                                                         VBOOL vbChecked);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlGetleftStatus (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      char **pbstrStatus);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlSetleftStatus (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      const char *pbstrStatus);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlGetrightStatus (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       char **pbstrStatus);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlSetrightStatus (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       const char *pbstrStatus);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlGeteditButtonVisible (CAObjHandle objectHandle,
                                                             ERRORINFO *errorInfo,
                                                             VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlSeteditButtonVisible (CAObjHandle objectHandle,
                                                             ERRORINFO *errorInfo,
                                                             VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlGetdropDownImage (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         char **pbstrImage);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlSetdropDownImage (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         const char *pbstrImage);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlGetdropDownBackgroundImage (CAObjHandle objectHandle,
                                                                   ERRORINFO *errorInfo,
                                                                   char **pbstrImage);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlSetdropDownBackgroundImage (CAObjHandle objectHandle,
                                                                   ERRORINFO *errorInfo,
                                                                   const char *pbstrImage);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlGethueShift (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    float *pVal);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlSethueShift (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    float pVal);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlGetsaturation (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      float *pVal);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlSetsaturation (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      float pVal);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlGetstatusColor (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       char **pbstrColor);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlSetstatusColor (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       const char *pbstrColor);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlGettoolbarVisible (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlSettoolbarVisible (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlGetitemSelectedColor (CAObjHandle objectHandle,
                                                             ERRORINFO *errorInfo,
                                                             char **pbstrColor);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlSetitemSelectedColor (CAObjHandle objectHandle,
                                                             ERRORINFO *errorInfo,
                                                             const char *pbstrColor);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlGetitemSelectedFocusLostColor (CAObjHandle objectHandle,
                                                                      ERRORINFO *errorInfo,
                                                                      char **pbstrFocusLostColor);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlSetitemSelectedFocusLostColor (CAObjHandle objectHandle,
                                                                      ERRORINFO *errorInfo,
                                                                      const char *pbstrFocusLostColor);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlGetitemSelectedBackgroundColor (CAObjHandle objectHandle,
                                                                       ERRORINFO *errorInfo,
                                                                       char **pbstrColor);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlSetitemSelectedBackgroundColor (CAObjHandle objectHandle,
                                                                       ERRORINFO *errorInfo,
                                                                       const char *pbstrColor);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlGetitemSelectedBackgroundFocusLostColor (CAObjHandle objectHandle,
                                                                                ERRORINFO *errorInfo,
                                                                                char **pbstrFocusLostColor);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlSetitemSelectedBackgroundFocusLostColor (CAObjHandle objectHandle,
                                                                                ERRORINFO *errorInfo,
                                                                                const char *pbstrFocusLostColor);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlGetbackgroundSplitColor (CAObjHandle objectHandle,
                                                                ERRORINFO *errorInfo,
                                                                char **pbstrColor);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlSetbackgroundSplitColor (CAObjHandle objectHandle,
                                                                ERRORINFO *errorInfo,
                                                                const char *pbstrColor);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlGetstatusTextColor (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           char **pbstrColor);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlSetstatusTextColor (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           const char *pbstrColor);

HRESULT CVIFUNC WMPLib_IWMPCore3close (CAObjHandle objectHandle,
                                       ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPCore3GetURL (CAObjHandle objectHandle,
                                        ERRORINFO *errorInfo, char **pbstrURL);

HRESULT CVIFUNC WMPLib_IWMPCore3SetURL (CAObjHandle objectHandle,
                                        ERRORINFO *errorInfo,
                                        const char *pbstrURL);

HRESULT CVIFUNC WMPLib_IWMPCore3GetopenState (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo,
                                              enum WMPLibEnum_WMPOpenState *pwmpos);

HRESULT CVIFUNC WMPLib_IWMPCore3GetplayState (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo,
                                              enum WMPLibEnum_WMPPlayState *pwmpps);

HRESULT CVIFUNC WMPLib_IWMPCore3Getcontrols (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo,
                                             WMPLibObj_IWMPControls *ppControl);

HRESULT CVIFUNC WMPLib_IWMPCore3Getsettings (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo,
                                             WMPLibObj_IWMPSettings *ppSettings);

HRESULT CVIFUNC WMPLib_IWMPCore3GetcurrentMedia (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 WMPLibObj_IWMPMedia *ppMedia);

HRESULT CVIFUNC WMPLib_IWMPCore3SetcurrentMedia (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 WMPLibObj_IWMPMedia ppMedia);

HRESULT CVIFUNC WMPLib_IWMPCore3GetmediaCollection (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    WMPLibObj_IWMPMediaCollection *ppMediaCollection);

HRESULT CVIFUNC WMPLib_IWMPCore3GetplaylistCollection (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       WMPLibObj_IWMPPlaylistCollection *ppPlaylistCollection);

HRESULT CVIFUNC WMPLib_IWMPCore3GetversionInfo (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                char **pbstrVersionInfo);

HRESULT CVIFUNC WMPLib_IWMPCore3launchURL (CAObjHandle objectHandle,
                                           ERRORINFO *errorInfo,
                                           const char *bstrURL);

HRESULT CVIFUNC WMPLib_IWMPCore3Getnetwork (CAObjHandle objectHandle,
                                            ERRORINFO *errorInfo,
                                            WMPLibObj_IWMPNetwork *ppQNI);

HRESULT CVIFUNC WMPLib_IWMPCore3GetcurrentPlaylist (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    WMPLibObj_IWMPPlaylist *ppPL);

HRESULT CVIFUNC WMPLib_IWMPCore3SetcurrentPlaylist (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    WMPLibObj_IWMPPlaylist ppPL);

HRESULT CVIFUNC WMPLib_IWMPCore3GetcdromCollection (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    WMPLibObj_IWMPCdromCollection *ppCdromCollection);

HRESULT CVIFUNC WMPLib_IWMPCore3GetclosedCaption (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  WMPLibObj_IWMPClosedCaption *ppClosedCaption);

HRESULT CVIFUNC WMPLib_IWMPCore3GetisOnline (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo,
                                             VBOOL *pfOnline);

HRESULT CVIFUNC WMPLib_IWMPCore3GetError (CAObjHandle objectHandle,
                                          ERRORINFO *errorInfo,
                                          WMPLibObj_IWMPError *ppError);

HRESULT CVIFUNC WMPLib_IWMPCore3Getstatus (CAObjHandle objectHandle,
                                           ERRORINFO *errorInfo,
                                           char **pbstrStatus);

HRESULT CVIFUNC WMPLib_IWMPCore3Getdvd (CAObjHandle objectHandle,
                                        ERRORINFO *errorInfo,
                                        WMPLibObj_IWMPDVD *ppDVD);

HRESULT CVIFUNC WMPLib_IWMPCore3newPlaylist (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo,
                                             const char *bstrName,
                                             const char *bstrURL,
                                             WMPLibObj_IWMPPlaylist *ppPlaylist);

HRESULT CVIFUNC WMPLib_IWMPCore3newMedia (CAObjHandle objectHandle,
                                          ERRORINFO *errorInfo,
                                          const char *bstrURL,
                                          WMPLibObj_IWMPMedia *ppMedia);

HRESULT CVIFUNC WMPLib_IWMPCore2close (CAObjHandle objectHandle,
                                       ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPCore2GetURL (CAObjHandle objectHandle,
                                        ERRORINFO *errorInfo, char **pbstrURL);

HRESULT CVIFUNC WMPLib_IWMPCore2SetURL (CAObjHandle objectHandle,
                                        ERRORINFO *errorInfo,
                                        const char *pbstrURL);

HRESULT CVIFUNC WMPLib_IWMPCore2GetopenState (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo,
                                              enum WMPLibEnum_WMPOpenState *pwmpos);

HRESULT CVIFUNC WMPLib_IWMPCore2GetplayState (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo,
                                              enum WMPLibEnum_WMPPlayState *pwmpps);

HRESULT CVIFUNC WMPLib_IWMPCore2Getcontrols (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo,
                                             WMPLibObj_IWMPControls *ppControl);

HRESULT CVIFUNC WMPLib_IWMPCore2Getsettings (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo,
                                             WMPLibObj_IWMPSettings *ppSettings);

HRESULT CVIFUNC WMPLib_IWMPCore2GetcurrentMedia (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 WMPLibObj_IWMPMedia *ppMedia);

HRESULT CVIFUNC WMPLib_IWMPCore2SetcurrentMedia (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 WMPLibObj_IWMPMedia ppMedia);

HRESULT CVIFUNC WMPLib_IWMPCore2GetmediaCollection (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    WMPLibObj_IWMPMediaCollection *ppMediaCollection);

HRESULT CVIFUNC WMPLib_IWMPCore2GetplaylistCollection (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       WMPLibObj_IWMPPlaylistCollection *ppPlaylistCollection);

HRESULT CVIFUNC WMPLib_IWMPCore2GetversionInfo (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                char **pbstrVersionInfo);

HRESULT CVIFUNC WMPLib_IWMPCore2launchURL (CAObjHandle objectHandle,
                                           ERRORINFO *errorInfo,
                                           const char *bstrURL);

HRESULT CVIFUNC WMPLib_IWMPCore2Getnetwork (CAObjHandle objectHandle,
                                            ERRORINFO *errorInfo,
                                            WMPLibObj_IWMPNetwork *ppQNI);

HRESULT CVIFUNC WMPLib_IWMPCore2GetcurrentPlaylist (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    WMPLibObj_IWMPPlaylist *ppPL);

HRESULT CVIFUNC WMPLib_IWMPCore2SetcurrentPlaylist (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    WMPLibObj_IWMPPlaylist ppPL);

HRESULT CVIFUNC WMPLib_IWMPCore2GetcdromCollection (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    WMPLibObj_IWMPCdromCollection *ppCdromCollection);

HRESULT CVIFUNC WMPLib_IWMPCore2GetclosedCaption (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  WMPLibObj_IWMPClosedCaption *ppClosedCaption);

HRESULT CVIFUNC WMPLib_IWMPCore2GetisOnline (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo,
                                             VBOOL *pfOnline);

HRESULT CVIFUNC WMPLib_IWMPCore2GetError (CAObjHandle objectHandle,
                                          ERRORINFO *errorInfo,
                                          WMPLibObj_IWMPError *ppError);

HRESULT CVIFUNC WMPLib_IWMPCore2Getstatus (CAObjHandle objectHandle,
                                           ERRORINFO *errorInfo,
                                           char **pbstrStatus);

HRESULT CVIFUNC WMPLib_IWMPCore2Getdvd (CAObjHandle objectHandle,
                                        ERRORINFO *errorInfo,
                                        WMPLibObj_IWMPDVD *ppDVD);

HRESULT CVIFUNC WMPLib_IWMPCoreclose (CAObjHandle objectHandle,
                                      ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPCoreGetURL (CAObjHandle objectHandle,
                                       ERRORINFO *errorInfo, char **pbstrURL);

HRESULT CVIFUNC WMPLib_IWMPCoreSetURL (CAObjHandle objectHandle,
                                       ERRORINFO *errorInfo,
                                       const char *pbstrURL);

HRESULT CVIFUNC WMPLib_IWMPCoreGetopenState (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo,
                                             enum WMPLibEnum_WMPOpenState *pwmpos);

HRESULT CVIFUNC WMPLib_IWMPCoreGetplayState (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo,
                                             enum WMPLibEnum_WMPPlayState *pwmpps);

HRESULT CVIFUNC WMPLib_IWMPCoreGetcontrols (CAObjHandle objectHandle,
                                            ERRORINFO *errorInfo,
                                            WMPLibObj_IWMPControls *ppControl);

HRESULT CVIFUNC WMPLib_IWMPCoreGetsettings (CAObjHandle objectHandle,
                                            ERRORINFO *errorInfo,
                                            WMPLibObj_IWMPSettings *ppSettings);

HRESULT CVIFUNC WMPLib_IWMPCoreGetcurrentMedia (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                WMPLibObj_IWMPMedia *ppMedia);

HRESULT CVIFUNC WMPLib_IWMPCoreSetcurrentMedia (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                WMPLibObj_IWMPMedia ppMedia);

HRESULT CVIFUNC WMPLib_IWMPCoreGetmediaCollection (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   WMPLibObj_IWMPMediaCollection *ppMediaCollection);

HRESULT CVIFUNC WMPLib_IWMPCoreGetplaylistCollection (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      WMPLibObj_IWMPPlaylistCollection *ppPlaylistCollection);

HRESULT CVIFUNC WMPLib_IWMPCoreGetversionInfo (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo,
                                               char **pbstrVersionInfo);

HRESULT CVIFUNC WMPLib_IWMPCorelaunchURL (CAObjHandle objectHandle,
                                          ERRORINFO *errorInfo,
                                          const char *bstrURL);

HRESULT CVIFUNC WMPLib_IWMPCoreGetnetwork (CAObjHandle objectHandle,
                                           ERRORINFO *errorInfo,
                                           WMPLibObj_IWMPNetwork *ppQNI);

HRESULT CVIFUNC WMPLib_IWMPCoreGetcurrentPlaylist (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   WMPLibObj_IWMPPlaylist *ppPL);

HRESULT CVIFUNC WMPLib_IWMPCoreSetcurrentPlaylist (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   WMPLibObj_IWMPPlaylist ppPL);

HRESULT CVIFUNC WMPLib_IWMPCoreGetcdromCollection (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   WMPLibObj_IWMPCdromCollection *ppCdromCollection);

HRESULT CVIFUNC WMPLib_IWMPCoreGetclosedCaption (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 WMPLibObj_IWMPClosedCaption *ppClosedCaption);

HRESULT CVIFUNC WMPLib_IWMPCoreGetisOnline (CAObjHandle objectHandle,
                                            ERRORINFO *errorInfo,
                                            VBOOL *pfOnline);

HRESULT CVIFUNC WMPLib_IWMPCoreGetError (CAObjHandle objectHandle,
                                         ERRORINFO *errorInfo,
                                         WMPLibObj_IWMPError *ppError);

HRESULT CVIFUNC WMPLib_IWMPCoreGetstatus (CAObjHandle objectHandle,
                                          ERRORINFO *errorInfo,
                                          char **pbstrStatus);

HRESULT CVIFUNC WMPLib_IWMPStringCollectionGetcount (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     long *plCount);

HRESULT CVIFUNC WMPLib_IWMPStringCollectionItem (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 long lIndex, char **pbstrString);

HRESULT CVIFUNC WMPLib_IWMPCdromGetdriveSpecifier (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   char **pbstrDrive);

HRESULT CVIFUNC WMPLib_IWMPCdromGetPlaylist (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo,
                                             WMPLibObj_IWMPPlaylist *ppPlaylist);

HRESULT CVIFUNC WMPLib_IWMPCdromeject (CAObjHandle objectHandle,
                                       ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPEventsOpenStateChange (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  long newState);

HRESULT CVIFUNC WMPLib_IWMPEventsPlayStateChange (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  long newState);

HRESULT CVIFUNC WMPLib_IWMPEventsAudioLanguageChange (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      long langID);

HRESULT CVIFUNC WMPLib_IWMPEventsStatusChange (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPEventsScriptCommand (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                const char *scType,
                                                const char *param);

HRESULT CVIFUNC WMPLib_IWMPEventsNewStream (CAObjHandle objectHandle,
                                            ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPEventsDisconnect (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo, long result);

HRESULT CVIFUNC WMPLib_IWMPEventsBuffering (CAObjHandle objectHandle,
                                            ERRORINFO *errorInfo, VBOOL start);

HRESULT CVIFUNC WMPLib_IWMPEventsError (CAObjHandle objectHandle,
                                        ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPEventsWarning (CAObjHandle objectHandle,
                                          ERRORINFO *errorInfo, long warningType,
                                          long param, const char *description);

HRESULT CVIFUNC WMPLib_IWMPEventsEndOfStream (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo, long result);

HRESULT CVIFUNC WMPLib_IWMPEventsPositionChange (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 double oldPosition,
                                                 double newPosition);

HRESULT CVIFUNC WMPLib_IWMPEventsMarkerHit (CAObjHandle objectHandle,
                                            ERRORINFO *errorInfo, long markerNum);

HRESULT CVIFUNC WMPLib_IWMPEventsDurationUnitChange (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     long newDurationUnit);

HRESULT CVIFUNC WMPLib_IWMPEventsCdromMediaChange (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   long cdromNum);

HRESULT CVIFUNC WMPLib_IWMPEventsPlaylistChange (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 CAObjHandle playlist,
                                                 enum WMPLibEnum_WMPPlaylistChangeEventType change);

HRESULT CVIFUNC WMPLib_IWMPEventsCurrentPlaylistChange (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        enum WMPLibEnum_WMPPlaylistChangeEventType change);

HRESULT CVIFUNC WMPLib_IWMPEventsCurrentPlaylistItemAvailable (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo,
                                                               const char *bstrItemName);

HRESULT CVIFUNC WMPLib_IWMPEventsMediaChange (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo,
                                              CAObjHandle item);

HRESULT CVIFUNC WMPLib_IWMPEventsCurrentMediaItemAvailable (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo,
                                                            const char *bstrItemName);

HRESULT CVIFUNC WMPLib_IWMPEventsCurrentItemChange (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    CAObjHandle pdispMedia);

HRESULT CVIFUNC WMPLib_IWMPEventsMediaCollectionChange (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPEventsMediaCollectionAttributeStringAdded (CAObjHandle objectHandle,
                                                                      ERRORINFO *errorInfo,
                                                                      const char *bstrAttribName,
                                                                      const char *bstrAttribVal);

HRESULT CVIFUNC WMPLib_IWMPEventsMediaCollectionAttributeStringRemoved (CAObjHandle objectHandle,
                                                                        ERRORINFO *errorInfo,
                                                                        const char *bstrAttribName,
                                                                        const char *bstrAttribVal);

HRESULT CVIFUNC WMPLib_IWMPEventsMediaCollectionAttributeStringChanged (CAObjHandle objectHandle,
                                                                        ERRORINFO *errorInfo,
                                                                        const char *bstrAttribName,
                                                                        const char *bstrOldAttribVal,
                                                                        const char *bstrNewAttribVal);

HRESULT CVIFUNC WMPLib_IWMPEventsPlaylistCollectionChange (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPEventsPlaylistCollectionPlaylistAdded (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo,
                                                                  const char *bstrPlaylistName);

HRESULT CVIFUNC WMPLib_IWMPEventsPlaylistCollectionPlaylistRemoved (CAObjHandle objectHandle,
                                                                    ERRORINFO *errorInfo,
                                                                    const char *bstrPlaylistName);

HRESULT CVIFUNC WMPLib_IWMPEventsPlaylistCollectionPlaylistSetAsDeleted (CAObjHandle objectHandle,
                                                                         ERRORINFO *errorInfo,
                                                                         const char *bstrPlaylistName,
                                                                         VBOOL varfIsDeleted);

HRESULT CVIFUNC WMPLib_IWMPEventsModeChange (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo,
                                             const char *modeName,
                                             VBOOL newValue);

HRESULT CVIFUNC WMPLib_IWMPEventsMediaError (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo,
                                             CAObjHandle pMediaObject);

HRESULT CVIFUNC WMPLib_IWMPEventsOpenPlaylistSwitch (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     CAObjHandle pItem);

HRESULT CVIFUNC WMPLib_IWMPEventsDomainChange (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo,
                                               const char *strDomain);

HRESULT CVIFUNC WMPLib_IWMPEventsSwitchedToPlayerApplication (CAObjHandle objectHandle,
                                                              ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPEventsSwitchedToControl (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPEventsPlayerDockedStateChange (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPEventsPlayerReconnect (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPEventsClick (CAObjHandle objectHandle,
                                        ERRORINFO *errorInfo, short nButton,
                                        short nShiftState, long fX, long fY);

HRESULT CVIFUNC WMPLib_IWMPEventsDoubleClick (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo,
                                              short nButton, short nShiftState,
                                              long fX, long fY);

HRESULT CVIFUNC WMPLib_IWMPEventsKeyDown (CAObjHandle objectHandle,
                                          ERRORINFO *errorInfo, short nKeyCode,
                                          short nShiftState);

HRESULT CVIFUNC WMPLib_IWMPEventsKeyPress (CAObjHandle objectHandle,
                                           ERRORINFO *errorInfo, short nKeyAscii);

HRESULT CVIFUNC WMPLib_IWMPEventsKeyUp (CAObjHandle objectHandle,
                                        ERRORINFO *errorInfo, short nKeyCode,
                                        short nShiftState);

HRESULT CVIFUNC WMPLib_IWMPEventsMouseDown (CAObjHandle objectHandle,
                                            ERRORINFO *errorInfo, short nButton,
                                            short nShiftState, long fX, long fY);

HRESULT CVIFUNC WMPLib_IWMPEventsMouseMove (CAObjHandle objectHandle,
                                            ERRORINFO *errorInfo, short nButton,
                                            short nShiftState, long fX, long fY);

HRESULT CVIFUNC WMPLib_IWMPEventsMouseUp (CAObjHandle objectHandle,
                                          ERRORINFO *errorInfo, short nButton,
                                          short nShiftState, long fX, long fY);

HRESULT CVIFUNC WMPLib_IWMPEvents2OpenStateChange (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   long newState);

HRESULT CVIFUNC WMPLib_IWMPEvents2PlayStateChange (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   long newState);

HRESULT CVIFUNC WMPLib_IWMPEvents2AudioLanguageChange (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       long langID);

HRESULT CVIFUNC WMPLib_IWMPEvents2StatusChange (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPEvents2ScriptCommand (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 const char *scType,
                                                 const char *param);

HRESULT CVIFUNC WMPLib_IWMPEvents2NewStream (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPEvents2Disconnect (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo, long result);

HRESULT CVIFUNC WMPLib_IWMPEvents2Buffering (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo, VBOOL start);

HRESULT CVIFUNC WMPLib_IWMPEvents2Error (CAObjHandle objectHandle,
                                         ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPEvents2Warning (CAObjHandle objectHandle,
                                           ERRORINFO *errorInfo,
                                           long warningType, long param,
                                           const char *description);

HRESULT CVIFUNC WMPLib_IWMPEvents2EndOfStream (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo, long result);

HRESULT CVIFUNC WMPLib_IWMPEvents2PositionChange (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  double oldPosition,
                                                  double newPosition);

HRESULT CVIFUNC WMPLib_IWMPEvents2MarkerHit (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo,
                                             long markerNum);

HRESULT CVIFUNC WMPLib_IWMPEvents2DurationUnitChange (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      long newDurationUnit);

HRESULT CVIFUNC WMPLib_IWMPEvents2CdromMediaChange (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    long cdromNum);

HRESULT CVIFUNC WMPLib_IWMPEvents2PlaylistChange (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  CAObjHandle playlist,
                                                  enum WMPLibEnum_WMPPlaylistChangeEventType change);

HRESULT CVIFUNC WMPLib_IWMPEvents2CurrentPlaylistChange (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         enum WMPLibEnum_WMPPlaylistChangeEventType change);

HRESULT CVIFUNC WMPLib_IWMPEvents2CurrentPlaylistItemAvailable (CAObjHandle objectHandle,
                                                                ERRORINFO *errorInfo,
                                                                const char *bstrItemName);

HRESULT CVIFUNC WMPLib_IWMPEvents2MediaChange (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo,
                                               CAObjHandle item);

HRESULT CVIFUNC WMPLib_IWMPEvents2CurrentMediaItemAvailable (CAObjHandle objectHandle,
                                                             ERRORINFO *errorInfo,
                                                             const char *bstrItemName);

HRESULT CVIFUNC WMPLib_IWMPEvents2CurrentItemChange (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     CAObjHandle pdispMedia);

HRESULT CVIFUNC WMPLib_IWMPEvents2MediaCollectionChange (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPEvents2MediaCollectionAttributeStringAdded (CAObjHandle objectHandle,
                                                                       ERRORINFO *errorInfo,
                                                                       const char *bstrAttribName,
                                                                       const char *bstrAttribVal);

HRESULT CVIFUNC WMPLib_IWMPEvents2MediaCollectionAttributeStringRemoved (CAObjHandle objectHandle,
                                                                         ERRORINFO *errorInfo,
                                                                         const char *bstrAttribName,
                                                                         const char *bstrAttribVal);

HRESULT CVIFUNC WMPLib_IWMPEvents2MediaCollectionAttributeStringChanged (CAObjHandle objectHandle,
                                                                         ERRORINFO *errorInfo,
                                                                         const char *bstrAttribName,
                                                                         const char *bstrOldAttribVal,
                                                                         const char *bstrNewAttribVal);

HRESULT CVIFUNC WMPLib_IWMPEvents2PlaylistCollectionChange (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPEvents2PlaylistCollectionPlaylistAdded (CAObjHandle objectHandle,
                                                                   ERRORINFO *errorInfo,
                                                                   const char *bstrPlaylistName);

HRESULT CVIFUNC WMPLib_IWMPEvents2PlaylistCollectionPlaylistRemoved (CAObjHandle objectHandle,
                                                                     ERRORINFO *errorInfo,
                                                                     const char *bstrPlaylistName);

HRESULT CVIFUNC WMPLib_IWMPEvents2PlaylistCollectionPlaylistSetAsDeleted (CAObjHandle objectHandle,
                                                                          ERRORINFO *errorInfo,
                                                                          const char *bstrPlaylistName,
                                                                          VBOOL varfIsDeleted);

HRESULT CVIFUNC WMPLib_IWMPEvents2ModeChange (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo,
                                              const char *modeName,
                                              VBOOL newValue);

HRESULT CVIFUNC WMPLib_IWMPEvents2MediaError (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo,
                                              CAObjHandle pMediaObject);

HRESULT CVIFUNC WMPLib_IWMPEvents2OpenPlaylistSwitch (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      CAObjHandle pItem);

HRESULT CVIFUNC WMPLib_IWMPEvents2DomainChange (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                const char *strDomain);

HRESULT CVIFUNC WMPLib_IWMPEvents2SwitchedToPlayerApplication (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPEvents2SwitchedToControl (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPEvents2PlayerDockedStateChange (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPEvents2PlayerReconnect (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPEvents2Click (CAObjHandle objectHandle,
                                         ERRORINFO *errorInfo, short nButton,
                                         short nShiftState, long fX, long fY);

HRESULT CVIFUNC WMPLib_IWMPEvents2DoubleClick (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo,
                                               short nButton, short nShiftState,
                                               long fX, long fY);

HRESULT CVIFUNC WMPLib_IWMPEvents2KeyDown (CAObjHandle objectHandle,
                                           ERRORINFO *errorInfo, short nKeyCode,
                                           short nShiftState);

HRESULT CVIFUNC WMPLib_IWMPEvents2KeyPress (CAObjHandle objectHandle,
                                            ERRORINFO *errorInfo,
                                            short nKeyAscii);

HRESULT CVIFUNC WMPLib_IWMPEvents2KeyUp (CAObjHandle objectHandle,
                                         ERRORINFO *errorInfo, short nKeyCode,
                                         short nShiftState);

HRESULT CVIFUNC WMPLib_IWMPEvents2MouseDown (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo, short nButton,
                                             short nShiftState, long fX, long fY);

HRESULT CVIFUNC WMPLib_IWMPEvents2MouseMove (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo, short nButton,
                                             short nShiftState, long fX, long fY);

HRESULT CVIFUNC WMPLib_IWMPEvents2MouseUp (CAObjHandle objectHandle,
                                           ERRORINFO *errorInfo, short nButton,
                                           short nShiftState, long fX, long fY);

HRESULT CVIFUNC WMPLib_IWMPEvents2DeviceConnect (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 WMPLibObj_IWMPSyncDevice pDevice);

HRESULT CVIFUNC WMPLib_IWMPEvents2DeviceDisconnect (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    WMPLibObj_IWMPSyncDevice pDevice);

HRESULT CVIFUNC WMPLib_IWMPEvents2DeviceStatusChange (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      WMPLibObj_IWMPSyncDevice pDevice,
                                                      enum WMPLibEnum_WMPDeviceStatus newStatus);

HRESULT CVIFUNC WMPLib_IWMPEvents2DeviceSyncStateChange (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         WMPLibObj_IWMPSyncDevice pDevice,
                                                         enum WMPLibEnum_WMPSyncState newState);

HRESULT CVIFUNC WMPLib_IWMPEvents2DeviceSyncError (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   WMPLibObj_IWMPSyncDevice pDevice,
                                                   CAObjHandle pMedia);

HRESULT CVIFUNC WMPLib_IWMPEvents2CreatePartnershipComplete (CAObjHandle objectHandle,
                                                             ERRORINFO *errorInfo,
                                                             WMPLibObj_IWMPSyncDevice pDevice,
                                                             long hrResult);

HRESULT CVIFUNC WMPLib_IWMPSyncDeviceGetfriendlyName (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      char **pbstrName);

HRESULT CVIFUNC WMPLib_IWMPSyncDeviceSetfriendlyName (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      const char *pbstrName);

HRESULT CVIFUNC WMPLib_IWMPSyncDeviceGetdeviceName (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    char **pbstrName);

HRESULT CVIFUNC WMPLib_IWMPSyncDeviceGetdeviceId (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  char **pbstrDeviceId);

HRESULT CVIFUNC WMPLib_IWMPSyncDeviceGetpartnershipIndex (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          long *plIndex);

HRESULT CVIFUNC WMPLib_IWMPSyncDeviceGetconnected (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   VBOOL *pvbConnected);

HRESULT CVIFUNC WMPLib_IWMPSyncDeviceGetstatus (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                enum WMPLibEnum_WMPDeviceStatus *pwmpds);

HRESULT CVIFUNC WMPLib_IWMPSyncDeviceGetsyncState (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   enum WMPLibEnum_WMPSyncState *pwmpss);

HRESULT CVIFUNC WMPLib_IWMPSyncDeviceGetprogress (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  long *plProgress);

HRESULT CVIFUNC WMPLib_IWMPSyncDevicegetItemInfo (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  const char *bstrItemName,
                                                  char **pbstrVal);

HRESULT CVIFUNC WMPLib_IWMPSyncDevicecreatePartnership (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        VBOOL vbShowUI);

HRESULT CVIFUNC WMPLib_IWMPSyncDevicedeletePartnership (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPSyncDeviceStart (CAObjHandle objectHandle,
                                            ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPSyncDevicestop (CAObjHandle objectHandle,
                                           ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPSyncDeviceshowSettings (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPSyncDeviceisIdentical (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  WMPLibObj_IWMPSyncDevice pDevice,
                                                  VBOOL *pvbool);

HRESULT CVIFUNC WMPLib_IWMPEvents3OpenStateChange (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   long newState);

HRESULT CVIFUNC WMPLib_IWMPEvents3PlayStateChange (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   long newState);

HRESULT CVIFUNC WMPLib_IWMPEvents3AudioLanguageChange (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       long langID);

HRESULT CVIFUNC WMPLib_IWMPEvents3StatusChange (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPEvents3ScriptCommand (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 const char *scType,
                                                 const char *param);

HRESULT CVIFUNC WMPLib_IWMPEvents3NewStream (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPEvents3Disconnect (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo, long result);

HRESULT CVIFUNC WMPLib_IWMPEvents3Buffering (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo, VBOOL start);

HRESULT CVIFUNC WMPLib_IWMPEvents3Error (CAObjHandle objectHandle,
                                         ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPEvents3Warning (CAObjHandle objectHandle,
                                           ERRORINFO *errorInfo,
                                           long warningType, long param,
                                           const char *description);

HRESULT CVIFUNC WMPLib_IWMPEvents3EndOfStream (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo, long result);

HRESULT CVIFUNC WMPLib_IWMPEvents3PositionChange (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  double oldPosition,
                                                  double newPosition);

HRESULT CVIFUNC WMPLib_IWMPEvents3MarkerHit (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo,
                                             long markerNum);

HRESULT CVIFUNC WMPLib_IWMPEvents3DurationUnitChange (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      long newDurationUnit);

HRESULT CVIFUNC WMPLib_IWMPEvents3CdromMediaChange (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    long cdromNum);

HRESULT CVIFUNC WMPLib_IWMPEvents3PlaylistChange (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  CAObjHandle playlist,
                                                  enum WMPLibEnum_WMPPlaylistChangeEventType change);

HRESULT CVIFUNC WMPLib_IWMPEvents3CurrentPlaylistChange (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         enum WMPLibEnum_WMPPlaylistChangeEventType change);

HRESULT CVIFUNC WMPLib_IWMPEvents3CurrentPlaylistItemAvailable (CAObjHandle objectHandle,
                                                                ERRORINFO *errorInfo,
                                                                const char *bstrItemName);

HRESULT CVIFUNC WMPLib_IWMPEvents3MediaChange (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo,
                                               CAObjHandle item);

HRESULT CVIFUNC WMPLib_IWMPEvents3CurrentMediaItemAvailable (CAObjHandle objectHandle,
                                                             ERRORINFO *errorInfo,
                                                             const char *bstrItemName);

HRESULT CVIFUNC WMPLib_IWMPEvents3CurrentItemChange (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     CAObjHandle pdispMedia);

HRESULT CVIFUNC WMPLib_IWMPEvents3MediaCollectionChange (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPEvents3MediaCollectionAttributeStringAdded (CAObjHandle objectHandle,
                                                                       ERRORINFO *errorInfo,
                                                                       const char *bstrAttribName,
                                                                       const char *bstrAttribVal);

HRESULT CVIFUNC WMPLib_IWMPEvents3MediaCollectionAttributeStringRemoved (CAObjHandle objectHandle,
                                                                         ERRORINFO *errorInfo,
                                                                         const char *bstrAttribName,
                                                                         const char *bstrAttribVal);

HRESULT CVIFUNC WMPLib_IWMPEvents3MediaCollectionAttributeStringChanged (CAObjHandle objectHandle,
                                                                         ERRORINFO *errorInfo,
                                                                         const char *bstrAttribName,
                                                                         const char *bstrOldAttribVal,
                                                                         const char *bstrNewAttribVal);

HRESULT CVIFUNC WMPLib_IWMPEvents3PlaylistCollectionChange (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPEvents3PlaylistCollectionPlaylistAdded (CAObjHandle objectHandle,
                                                                   ERRORINFO *errorInfo,
                                                                   const char *bstrPlaylistName);

HRESULT CVIFUNC WMPLib_IWMPEvents3PlaylistCollectionPlaylistRemoved (CAObjHandle objectHandle,
                                                                     ERRORINFO *errorInfo,
                                                                     const char *bstrPlaylistName);

HRESULT CVIFUNC WMPLib_IWMPEvents3PlaylistCollectionPlaylistSetAsDeleted (CAObjHandle objectHandle,
                                                                          ERRORINFO *errorInfo,
                                                                          const char *bstrPlaylistName,
                                                                          VBOOL varfIsDeleted);

HRESULT CVIFUNC WMPLib_IWMPEvents3ModeChange (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo,
                                              const char *modeName,
                                              VBOOL newValue);

HRESULT CVIFUNC WMPLib_IWMPEvents3MediaError (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo,
                                              CAObjHandle pMediaObject);

HRESULT CVIFUNC WMPLib_IWMPEvents3OpenPlaylistSwitch (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      CAObjHandle pItem);

HRESULT CVIFUNC WMPLib_IWMPEvents3DomainChange (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                const char *strDomain);

HRESULT CVIFUNC WMPLib_IWMPEvents3SwitchedToPlayerApplication (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPEvents3SwitchedToControl (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPEvents3PlayerDockedStateChange (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPEvents3PlayerReconnect (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPEvents3Click (CAObjHandle objectHandle,
                                         ERRORINFO *errorInfo, short nButton,
                                         short nShiftState, long fX, long fY);

HRESULT CVIFUNC WMPLib_IWMPEvents3DoubleClick (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo,
                                               short nButton, short nShiftState,
                                               long fX, long fY);

HRESULT CVIFUNC WMPLib_IWMPEvents3KeyDown (CAObjHandle objectHandle,
                                           ERRORINFO *errorInfo, short nKeyCode,
                                           short nShiftState);

HRESULT CVIFUNC WMPLib_IWMPEvents3KeyPress (CAObjHandle objectHandle,
                                            ERRORINFO *errorInfo,
                                            short nKeyAscii);

HRESULT CVIFUNC WMPLib_IWMPEvents3KeyUp (CAObjHandle objectHandle,
                                         ERRORINFO *errorInfo, short nKeyCode,
                                         short nShiftState);

HRESULT CVIFUNC WMPLib_IWMPEvents3MouseDown (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo, short nButton,
                                             short nShiftState, long fX, long fY);

HRESULT CVIFUNC WMPLib_IWMPEvents3MouseMove (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo, short nButton,
                                             short nShiftState, long fX, long fY);

HRESULT CVIFUNC WMPLib_IWMPEvents3MouseUp (CAObjHandle objectHandle,
                                           ERRORINFO *errorInfo, short nButton,
                                           short nShiftState, long fX, long fY);

HRESULT CVIFUNC WMPLib_IWMPEvents3DeviceConnect (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 WMPLibObj_IWMPSyncDevice pDevice);

HRESULT CVIFUNC WMPLib_IWMPEvents3DeviceDisconnect (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    WMPLibObj_IWMPSyncDevice pDevice);

HRESULT CVIFUNC WMPLib_IWMPEvents3DeviceStatusChange (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      WMPLibObj_IWMPSyncDevice pDevice,
                                                      enum WMPLibEnum_WMPDeviceStatus newStatus);

HRESULT CVIFUNC WMPLib_IWMPEvents3DeviceSyncStateChange (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         WMPLibObj_IWMPSyncDevice pDevice,
                                                         enum WMPLibEnum_WMPSyncState newState);

HRESULT CVIFUNC WMPLib_IWMPEvents3DeviceSyncError (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   WMPLibObj_IWMPSyncDevice pDevice,
                                                   CAObjHandle pMedia);

HRESULT CVIFUNC WMPLib_IWMPEvents3CreatePartnershipComplete (CAObjHandle objectHandle,
                                                             ERRORINFO *errorInfo,
                                                             WMPLibObj_IWMPSyncDevice pDevice,
                                                             long hrResult);

HRESULT CVIFUNC WMPLib_IWMPEvents3CdromRipStateChange (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       WMPLibObj_IWMPCdromRip pCdromRip,
                                                       enum WMPLibEnum_WMPRipState wmprs);

HRESULT CVIFUNC WMPLib_IWMPEvents3CdromRipMediaError (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      WMPLibObj_IWMPCdromRip pCdromRip,
                                                      CAObjHandle pMedia);

HRESULT CVIFUNC WMPLib_IWMPEvents3CdromBurnStateChange (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        WMPLibObj_IWMPCdromBurn pCdromBurn,
                                                        enum WMPLibEnum_WMPBurnState wmpbs);

HRESULT CVIFUNC WMPLib_IWMPEvents3CdromBurnMediaError (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       WMPLibObj_IWMPCdromBurn pCdromBurn,
                                                       CAObjHandle pMedia);

HRESULT CVIFUNC WMPLib_IWMPEvents3CdromBurnError (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  WMPLibObj_IWMPCdromBurn pCdromBurn,
                                                  long hrError);

HRESULT CVIFUNC WMPLib_IWMPEvents3LibraryConnect (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  WMPLibObj_IWMPLibrary pLibrary);

HRESULT CVIFUNC WMPLib_IWMPEvents3LibraryDisconnect (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     WMPLibObj_IWMPLibrary pLibrary);

HRESULT CVIFUNC WMPLib_IWMPEvents3FolderScanStateChange (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         enum WMPLibEnum_WMPFolderScanState wmpfss);

HRESULT CVIFUNC WMPLib_IWMPEvents3StringCollectionChange (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          CAObjHandle pdispStringCollection,
                                                          enum WMPLibEnum_WMPStringCollectionChangeEventType change,
                                                          long lCollectionIndex);

HRESULT CVIFUNC WMPLib_IWMPEvents3MediaCollectionMediaAdded (CAObjHandle objectHandle,
                                                             ERRORINFO *errorInfo,
                                                             CAObjHandle pdispMedia);

HRESULT CVIFUNC WMPLib_IWMPEvents3MediaCollectionMediaRemoved (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo,
                                                               CAObjHandle pdispMedia);

HRESULT CVIFUNC WMPLib_IWMPCdromRipGetripState (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                enum WMPLibEnum_WMPRipState *pwmprs);

HRESULT CVIFUNC WMPLib_IWMPCdromRipGetripProgress (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   long *plProgress);

HRESULT CVIFUNC WMPLib_IWMPCdromRipstartRip (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPCdromRipstopRip (CAObjHandle objectHandle,
                                            ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPCdromBurnisAvailable (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 const char *bstrItem,
                                                 VBOOL *pIsAvailable);

HRESULT CVIFUNC WMPLib_IWMPCdromBurngetItemInfo (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 const char *bstrItem,
                                                 char **pbstrVal);

HRESULT CVIFUNC WMPLib_IWMPCdromBurnGetlabel (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo,
                                              char **pbstrLabel);

HRESULT CVIFUNC WMPLib_IWMPCdromBurnSetlabel (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo,
                                              const char *pbstrLabel);

HRESULT CVIFUNC WMPLib_IWMPCdromBurnGetburnFormat (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   enum WMPLibEnum_WMPBurnFormat *pwmpbf);

HRESULT CVIFUNC WMPLib_IWMPCdromBurnSetburnFormat (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   enum WMPLibEnum_WMPBurnFormat pwmpbf);

HRESULT CVIFUNC WMPLib_IWMPCdromBurnGetburnPlaylist (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     WMPLibObj_IWMPPlaylist *ppPlaylist);

HRESULT CVIFUNC WMPLib_IWMPCdromBurnSetburnPlaylist (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     WMPLibObj_IWMPPlaylist ppPlaylist);

HRESULT CVIFUNC WMPLib_IWMPCdromBurnrefreshStatus (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPCdromBurnGetburnState (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  enum WMPLibEnum_WMPBurnState *pwmpbs);

HRESULT CVIFUNC WMPLib_IWMPCdromBurnGetburnProgress (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     long *plProgress);

HRESULT CVIFUNC WMPLib_IWMPCdromBurnstartBurn (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPCdromBurnstopBurn (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPCdromBurnerase (CAObjHandle objectHandle,
                                           ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPLibraryGetname (CAObjHandle objectHandle,
                                           ERRORINFO *errorInfo,
                                           char **pbstrName);

HRESULT CVIFUNC WMPLib_IWMPLibraryGettype (CAObjHandle objectHandle,
                                           ERRORINFO *errorInfo,
                                           enum WMPLibEnum_WMPLibraryType *pwmplt);

HRESULT CVIFUNC WMPLib_IWMPLibraryGetmediaCollection (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      WMPLibObj_IWMPMediaCollection *ppIWMPMediaCollection);

HRESULT CVIFUNC WMPLib_IWMPLibraryisIdentical (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo,
                                               WMPLibObj_IWMPLibrary pIWMPLibrary,
                                               VBOOL *pvbool);

HRESULT CVIFUNC WMPLib_IWMPEvents4OpenStateChange (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   long newState);

HRESULT CVIFUNC WMPLib_IWMPEvents4PlayStateChange (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   long newState);

HRESULT CVIFUNC WMPLib_IWMPEvents4AudioLanguageChange (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       long langID);

HRESULT CVIFUNC WMPLib_IWMPEvents4StatusChange (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPEvents4ScriptCommand (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 const char *scType,
                                                 const char *param);

HRESULT CVIFUNC WMPLib_IWMPEvents4NewStream (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPEvents4Disconnect (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo, long result);

HRESULT CVIFUNC WMPLib_IWMPEvents4Buffering (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo, VBOOL start);

HRESULT CVIFUNC WMPLib_IWMPEvents4Error (CAObjHandle objectHandle,
                                         ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPEvents4Warning (CAObjHandle objectHandle,
                                           ERRORINFO *errorInfo,
                                           long warningType, long param,
                                           const char *description);

HRESULT CVIFUNC WMPLib_IWMPEvents4EndOfStream (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo, long result);

HRESULT CVIFUNC WMPLib_IWMPEvents4PositionChange (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  double oldPosition,
                                                  double newPosition);

HRESULT CVIFUNC WMPLib_IWMPEvents4MarkerHit (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo,
                                             long markerNum);

HRESULT CVIFUNC WMPLib_IWMPEvents4DurationUnitChange (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      long newDurationUnit);

HRESULT CVIFUNC WMPLib_IWMPEvents4CdromMediaChange (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    long cdromNum);

HRESULT CVIFUNC WMPLib_IWMPEvents4PlaylistChange (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  CAObjHandle playlist,
                                                  enum WMPLibEnum_WMPPlaylistChangeEventType change);

HRESULT CVIFUNC WMPLib_IWMPEvents4CurrentPlaylistChange (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         enum WMPLibEnum_WMPPlaylistChangeEventType change);

HRESULT CVIFUNC WMPLib_IWMPEvents4CurrentPlaylistItemAvailable (CAObjHandle objectHandle,
                                                                ERRORINFO *errorInfo,
                                                                const char *bstrItemName);

HRESULT CVIFUNC WMPLib_IWMPEvents4MediaChange (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo,
                                               CAObjHandle item);

HRESULT CVIFUNC WMPLib_IWMPEvents4CurrentMediaItemAvailable (CAObjHandle objectHandle,
                                                             ERRORINFO *errorInfo,
                                                             const char *bstrItemName);

HRESULT CVIFUNC WMPLib_IWMPEvents4CurrentItemChange (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     CAObjHandle pdispMedia);

HRESULT CVIFUNC WMPLib_IWMPEvents4MediaCollectionChange (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPEvents4MediaCollectionAttributeStringAdded (CAObjHandle objectHandle,
                                                                       ERRORINFO *errorInfo,
                                                                       const char *bstrAttribName,
                                                                       const char *bstrAttribVal);

HRESULT CVIFUNC WMPLib_IWMPEvents4MediaCollectionAttributeStringRemoved (CAObjHandle objectHandle,
                                                                         ERRORINFO *errorInfo,
                                                                         const char *bstrAttribName,
                                                                         const char *bstrAttribVal);

HRESULT CVIFUNC WMPLib_IWMPEvents4MediaCollectionAttributeStringChanged (CAObjHandle objectHandle,
                                                                         ERRORINFO *errorInfo,
                                                                         const char *bstrAttribName,
                                                                         const char *bstrOldAttribVal,
                                                                         const char *bstrNewAttribVal);

HRESULT CVIFUNC WMPLib_IWMPEvents4PlaylistCollectionChange (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPEvents4PlaylistCollectionPlaylistAdded (CAObjHandle objectHandle,
                                                                   ERRORINFO *errorInfo,
                                                                   const char *bstrPlaylistName);

HRESULT CVIFUNC WMPLib_IWMPEvents4PlaylistCollectionPlaylistRemoved (CAObjHandle objectHandle,
                                                                     ERRORINFO *errorInfo,
                                                                     const char *bstrPlaylistName);

HRESULT CVIFUNC WMPLib_IWMPEvents4PlaylistCollectionPlaylistSetAsDeleted (CAObjHandle objectHandle,
                                                                          ERRORINFO *errorInfo,
                                                                          const char *bstrPlaylistName,
                                                                          VBOOL varfIsDeleted);

HRESULT CVIFUNC WMPLib_IWMPEvents4ModeChange (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo,
                                              const char *modeName,
                                              VBOOL newValue);

HRESULT CVIFUNC WMPLib_IWMPEvents4MediaError (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo,
                                              CAObjHandle pMediaObject);

HRESULT CVIFUNC WMPLib_IWMPEvents4OpenPlaylistSwitch (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      CAObjHandle pItem);

HRESULT CVIFUNC WMPLib_IWMPEvents4DomainChange (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                const char *strDomain);

HRESULT CVIFUNC WMPLib_IWMPEvents4SwitchedToPlayerApplication (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPEvents4SwitchedToControl (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPEvents4PlayerDockedStateChange (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPEvents4PlayerReconnect (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPEvents4Click (CAObjHandle objectHandle,
                                         ERRORINFO *errorInfo, short nButton,
                                         short nShiftState, long fX, long fY);

HRESULT CVIFUNC WMPLib_IWMPEvents4DoubleClick (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo,
                                               short nButton, short nShiftState,
                                               long fX, long fY);

HRESULT CVIFUNC WMPLib_IWMPEvents4KeyDown (CAObjHandle objectHandle,
                                           ERRORINFO *errorInfo, short nKeyCode,
                                           short nShiftState);

HRESULT CVIFUNC WMPLib_IWMPEvents4KeyPress (CAObjHandle objectHandle,
                                            ERRORINFO *errorInfo,
                                            short nKeyAscii);

HRESULT CVIFUNC WMPLib_IWMPEvents4KeyUp (CAObjHandle objectHandle,
                                         ERRORINFO *errorInfo, short nKeyCode,
                                         short nShiftState);

HRESULT CVIFUNC WMPLib_IWMPEvents4MouseDown (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo, short nButton,
                                             short nShiftState, long fX, long fY);

HRESULT CVIFUNC WMPLib_IWMPEvents4MouseMove (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo, short nButton,
                                             short nShiftState, long fX, long fY);

HRESULT CVIFUNC WMPLib_IWMPEvents4MouseUp (CAObjHandle objectHandle,
                                           ERRORINFO *errorInfo, short nButton,
                                           short nShiftState, long fX, long fY);

HRESULT CVIFUNC WMPLib_IWMPEvents4DeviceConnect (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 WMPLibObj_IWMPSyncDevice pDevice);

HRESULT CVIFUNC WMPLib_IWMPEvents4DeviceDisconnect (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    WMPLibObj_IWMPSyncDevice pDevice);

HRESULT CVIFUNC WMPLib_IWMPEvents4DeviceStatusChange (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      WMPLibObj_IWMPSyncDevice pDevice,
                                                      enum WMPLibEnum_WMPDeviceStatus newStatus);

HRESULT CVIFUNC WMPLib_IWMPEvents4DeviceSyncStateChange (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         WMPLibObj_IWMPSyncDevice pDevice,
                                                         enum WMPLibEnum_WMPSyncState newState);

HRESULT CVIFUNC WMPLib_IWMPEvents4DeviceSyncError (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   WMPLibObj_IWMPSyncDevice pDevice,
                                                   CAObjHandle pMedia);

HRESULT CVIFUNC WMPLib_IWMPEvents4CreatePartnershipComplete (CAObjHandle objectHandle,
                                                             ERRORINFO *errorInfo,
                                                             WMPLibObj_IWMPSyncDevice pDevice,
                                                             long hrResult);

HRESULT CVIFUNC WMPLib_IWMPEvents4CdromRipStateChange (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       WMPLibObj_IWMPCdromRip pCdromRip,
                                                       enum WMPLibEnum_WMPRipState wmprs);

HRESULT CVIFUNC WMPLib_IWMPEvents4CdromRipMediaError (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      WMPLibObj_IWMPCdromRip pCdromRip,
                                                      CAObjHandle pMedia);

HRESULT CVIFUNC WMPLib_IWMPEvents4CdromBurnStateChange (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        WMPLibObj_IWMPCdromBurn pCdromBurn,
                                                        enum WMPLibEnum_WMPBurnState wmpbs);

HRESULT CVIFUNC WMPLib_IWMPEvents4CdromBurnMediaError (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       WMPLibObj_IWMPCdromBurn pCdromBurn,
                                                       CAObjHandle pMedia);

HRESULT CVIFUNC WMPLib_IWMPEvents4CdromBurnError (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  WMPLibObj_IWMPCdromBurn pCdromBurn,
                                                  long hrError);

HRESULT CVIFUNC WMPLib_IWMPEvents4LibraryConnect (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  WMPLibObj_IWMPLibrary pLibrary);

HRESULT CVIFUNC WMPLib_IWMPEvents4LibraryDisconnect (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     WMPLibObj_IWMPLibrary pLibrary);

HRESULT CVIFUNC WMPLib_IWMPEvents4FolderScanStateChange (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         enum WMPLibEnum_WMPFolderScanState wmpfss);

HRESULT CVIFUNC WMPLib_IWMPEvents4StringCollectionChange (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          CAObjHandle pdispStringCollection,
                                                          enum WMPLibEnum_WMPStringCollectionChangeEventType change,
                                                          long lCollectionIndex);

HRESULT CVIFUNC WMPLib_IWMPEvents4MediaCollectionMediaAdded (CAObjHandle objectHandle,
                                                             ERRORINFO *errorInfo,
                                                             CAObjHandle pdispMedia);

HRESULT CVIFUNC WMPLib_IWMPEvents4MediaCollectionMediaRemoved (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo,
                                                               CAObjHandle pdispMedia);

HRESULT CVIFUNC WMPLib_IWMPPlaylistArrayGetcount (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  long *plCount);

HRESULT CVIFUNC WMPLib_IWMPPlaylistArrayItem (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo, long lIndex,
                                              WMPLibObj_IWMPPlaylist *ppItem);

HRESULT CVIFUNC WMPLib_IWMPNetworkGetbandWidth (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                long *plBandwidth);

HRESULT CVIFUNC WMPLib_IWMPNetworkGetrecoveredPackets (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       long *plRecoveredPackets);

HRESULT CVIFUNC WMPLib_IWMPNetworkGetsourceProtocol (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     char **pbstrSourceProtocol);

HRESULT CVIFUNC WMPLib_IWMPNetworkGetreceivedPackets (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      long *plReceivedPackets);

HRESULT CVIFUNC WMPLib_IWMPNetworkGetlostPackets (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  long *plLostPackets);

HRESULT CVIFUNC WMPLib_IWMPNetworkGetreceptionQuality (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       long *plReceptionQuality);

HRESULT CVIFUNC WMPLib_IWMPNetworkGetbufferingCount (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     long *plBufferingCount);

HRESULT CVIFUNC WMPLib_IWMPNetworkGetbufferingProgress (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        long *plBufferingProgress);

HRESULT CVIFUNC WMPLib_IWMPNetworkGetbufferingTime (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    long *plBufferingTime);

HRESULT CVIFUNC WMPLib_IWMPNetworkSetbufferingTime (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    long plBufferingTime);

HRESULT CVIFUNC WMPLib_IWMPNetworkGetframeRate (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                long *plFrameRate);

HRESULT CVIFUNC WMPLib_IWMPNetworkGetmaxBitRate (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 long *plBitRate);

HRESULT CVIFUNC WMPLib_IWMPNetworkGetbitRate (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo,
                                              long *plBitRate);

HRESULT CVIFUNC WMPLib_IWMPNetworkgetProxySettings (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    const char *bstrProtocol,
                                                    long *plProxySetting);

HRESULT CVIFUNC WMPLib_IWMPNetworksetProxySettings (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    const char *bstrProtocol,
                                                    long lProxySetting);

HRESULT CVIFUNC WMPLib_IWMPNetworkgetProxyName (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                const char *bstrProtocol,
                                                char **pbstrProxyName);

HRESULT CVIFUNC WMPLib_IWMPNetworksetProxyName (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                const char *bstrProtocol,
                                                const char *bstrProxyName);

HRESULT CVIFUNC WMPLib_IWMPNetworkgetProxyPort (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                const char *bstrProtocol,
                                                long *lProxyPort);

HRESULT CVIFUNC WMPLib_IWMPNetworksetProxyPort (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                const char *bstrProtocol,
                                                long lProxyPort);

HRESULT CVIFUNC WMPLib_IWMPNetworkgetProxyExceptionList (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         const char *bstrProtocol,
                                                         char **pbstrExceptionList);

HRESULT CVIFUNC WMPLib_IWMPNetworksetProxyExceptionList (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         const char *bstrProtocol,
                                                         const char *pbstrExceptionList);

HRESULT CVIFUNC WMPLib_IWMPNetworkgetProxyBypassForLocal (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          const char *bstrProtocol,
                                                          VBOOL *pfBypassForLocal);

HRESULT CVIFUNC WMPLib_IWMPNetworksetProxyBypassForLocal (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          const char *bstrProtocol,
                                                          VBOOL fBypassForLocal);

HRESULT CVIFUNC WMPLib_IWMPNetworkGetmaxBandwidth (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   long *lMaxBandwidth);

HRESULT CVIFUNC WMPLib_IWMPNetworkSetmaxBandwidth (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   long lMaxBandwidth);

HRESULT CVIFUNC WMPLib_IWMPNetworkGetdownloadProgress (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       long *plDownloadProgress);

HRESULT CVIFUNC WMPLib_IWMPNetworkGetencodedFrameRate (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       long *plFrameRate);

HRESULT CVIFUNC WMPLib_IWMPNetworkGetframesSkipped (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    long *plFrames);

HRESULT CVIFUNC WMPLib_IWMPPlayerApplicationswitchToPlayerApplication (CAObjHandle objectHandle,
                                                                       ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPPlayerApplicationswitchToControl (CAObjHandle objectHandle,
                                                             ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPPlayerApplicationGetplayerDocked (CAObjHandle objectHandle,
                                                             ERRORINFO *errorInfo,
                                                             VBOOL *pbPlayerDocked);

HRESULT CVIFUNC WMPLib_IWMPPlayerApplicationGethasDisplay (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           VBOOL *pbHasDisplay);

HRESULT CVIFUNC WMPLib_IWMPQueryaddCondition (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo,
                                              const char *bstrAttribute,
                                              const char *bstrOperator,
                                              const char *bstrValue);

HRESULT CVIFUNC WMPLib_IWMPQuerybeginNextGroup (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPPlayerServicesactivateUIPlugin (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           const char *bstrPlugin);

HRESULT CVIFUNC WMPLib_IWMPPlayerServicessetTaskPane (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      const char *bstrTaskPane);

HRESULT CVIFUNC WMPLib_IWMPPlayerServicessetTaskPaneURL (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         const char *bstrTaskPane,
                                                         const char *bstrURL,
                                                         const char *bstrFriendlyName);

HRESULT CVIFUNC WMPLib_IWMPPlayerServices2activateUIPlugin (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo,
                                                            const char *bstrPlugin);

HRESULT CVIFUNC WMPLib_IWMPPlayerServices2setTaskPane (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       const char *bstrTaskPane);

HRESULT CVIFUNC WMPLib_IWMPPlayerServices2setTaskPaneURL (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          const char *bstrTaskPane,
                                                          const char *bstrURL,
                                                          const char *bstrFriendlyName);

HRESULT CVIFUNC WMPLib_IWMPPlayerServices2setBackgroundProcessingPriority (CAObjHandle objectHandle,
                                                                           ERRORINFO *errorInfo,
                                                                           const char *bstrPriority);

HRESULT CVIFUNC WMPLib_IWMPRemoteMediaServicesGetServiceType (CAObjHandle objectHandle,
                                                              ERRORINFO *errorInfo,
                                                              char **pbstrType);

HRESULT CVIFUNC WMPLib_IWMPRemoteMediaServicesGetApplicationName (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo,
                                                                  char **pbstrName);

HRESULT CVIFUNC WMPLib_IWMPRemoteMediaServicesGetScriptableObject (CAObjHandle objectHandle,
                                                                   ERRORINFO *errorInfo,
                                                                   char **pbstrName,
                                                                   CAObjHandle *ppDispatch);

HRESULT CVIFUNC WMPLib_IWMPRemoteMediaServicesGetCustomUIMode (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo,
                                                               char **pbstrFile);

HRESULT CVIFUNC WMPLib_IWMPSyncServicesGetdeviceCount (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       long *plCount);

HRESULT CVIFUNC WMPLib_IWMPSyncServicesgetDevice (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  long lIndex,
                                                  WMPLibObj_IWMPSyncDevice *ppDevice);

HRESULT CVIFUNC WMPLib_IWMPLibraryServicesgetCountByType (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          enum WMPLibEnum_WMPLibraryType wmplt,
                                                          long *plCount);

HRESULT CVIFUNC WMPLib_IWMPLibraryServicesgetLibraryByType (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo,
                                                            enum WMPLibEnum_WMPLibraryType wmplt,
                                                            long lIndex,
                                                            WMPLibObj_IWMPLibrary *ppIWMPLibrary);

HRESULT CVIFUNC WMPLib_IWMPLibrarySharingServicesisLibraryShared (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo,
                                                                  VBOOL *pvbShared);

HRESULT CVIFUNC WMPLib_IWMPLibrarySharingServicesisLibrarySharingEnabled (CAObjHandle objectHandle,
                                                                          ERRORINFO *errorInfo,
                                                                          VBOOL *pvbEnabled);

HRESULT CVIFUNC WMPLib_IWMPLibrarySharingServicesshowLibrarySharing (CAObjHandle objectHandle,
                                                                     ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPLibrary2Getname (CAObjHandle objectHandle,
                                            ERRORINFO *errorInfo,
                                            char **pbstrName);

HRESULT CVIFUNC WMPLib_IWMPLibrary2Gettype (CAObjHandle objectHandle,
                                            ERRORINFO *errorInfo,
                                            enum WMPLibEnum_WMPLibraryType *pwmplt);

HRESULT CVIFUNC WMPLib_IWMPLibrary2GetmediaCollection (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       WMPLibObj_IWMPMediaCollection *ppIWMPMediaCollection);

HRESULT CVIFUNC WMPLib_IWMPLibrary2isIdentical (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                WMPLibObj_IWMPLibrary pIWMPLibrary,
                                                VBOOL *pvbool);

HRESULT CVIFUNC WMPLib_IWMPLibrary2getItemInfo (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                const char *bstrItemName,
                                                char **pbstrVal);

HRESULT CVIFUNC WMPLib_IWMPFolderMonitorServicesGetcount (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          long *plCount);

HRESULT CVIFUNC WMPLib_IWMPFolderMonitorServicesItem (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      long lIndex,
                                                      char **pbstrFolder);

HRESULT CVIFUNC WMPLib_IWMPFolderMonitorServicesadd (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     const char *bstrFolder);

HRESULT CVIFUNC WMPLib_IWMPFolderMonitorServicesremove (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        long lIndex);

HRESULT CVIFUNC WMPLib_IWMPFolderMonitorServicesGetscanState (CAObjHandle objectHandle,
                                                              ERRORINFO *errorInfo,
                                                              enum WMPLibEnum_WMPFolderScanState *pwmpfss);

HRESULT CVIFUNC WMPLib_IWMPFolderMonitorServicesGetcurrentFolder (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo,
                                                                  char **pbstrFolder);

HRESULT CVIFUNC WMPLib_IWMPFolderMonitorServicesGetscannedFilesCount (CAObjHandle objectHandle,
                                                                      ERRORINFO *errorInfo,
                                                                      long *plCount);

HRESULT CVIFUNC WMPLib_IWMPFolderMonitorServicesGetaddedFilesCount (CAObjHandle objectHandle,
                                                                    ERRORINFO *errorInfo,
                                                                    long *plCount);

HRESULT CVIFUNC WMPLib_IWMPFolderMonitorServicesGetupdateProgress (CAObjHandle objectHandle,
                                                                   ERRORINFO *errorInfo,
                                                                   long *plProgress);

HRESULT CVIFUNC WMPLib_IWMPFolderMonitorServicesstartScan (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPFolderMonitorServicesstopScan (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPSyncDevice2GetfriendlyName (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       char **pbstrName);

HRESULT CVIFUNC WMPLib_IWMPSyncDevice2SetfriendlyName (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       const char *pbstrName);

HRESULT CVIFUNC WMPLib_IWMPSyncDevice2GetdeviceName (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     char **pbstrName);

HRESULT CVIFUNC WMPLib_IWMPSyncDevice2GetdeviceId (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   char **pbstrDeviceId);

HRESULT CVIFUNC WMPLib_IWMPSyncDevice2GetpartnershipIndex (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           long *plIndex);

HRESULT CVIFUNC WMPLib_IWMPSyncDevice2Getconnected (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    VBOOL *pvbConnected);

HRESULT CVIFUNC WMPLib_IWMPSyncDevice2Getstatus (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 enum WMPLibEnum_WMPDeviceStatus *pwmpds);

HRESULT CVIFUNC WMPLib_IWMPSyncDevice2GetsyncState (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    enum WMPLibEnum_WMPSyncState *pwmpss);

HRESULT CVIFUNC WMPLib_IWMPSyncDevice2Getprogress (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   long *plProgress);

HRESULT CVIFUNC WMPLib_IWMPSyncDevice2getItemInfo (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   const char *bstrItemName,
                                                   char **pbstrVal);

HRESULT CVIFUNC WMPLib_IWMPSyncDevice2createPartnership (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         VBOOL vbShowUI);

HRESULT CVIFUNC WMPLib_IWMPSyncDevice2deletePartnership (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPSyncDevice2Start (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPSyncDevice2stop (CAObjHandle objectHandle,
                                            ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPSyncDevice2showSettings (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPSyncDevice2isIdentical (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   WMPLibObj_IWMPSyncDevice pDevice,
                                                   VBOOL *pvbool);

HRESULT CVIFUNC WMPLib_IWMPSyncDevice2setItemInfo (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   const char *bstrItemName,
                                                   const char *bstrVal);

HRESULT CVIFUNC WMPLib_IWMPSyncDevice3GetfriendlyName (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       char **pbstrName);

HRESULT CVIFUNC WMPLib_IWMPSyncDevice3SetfriendlyName (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       const char *pbstrName);

HRESULT CVIFUNC WMPLib_IWMPSyncDevice3GetdeviceName (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     char **pbstrName);

HRESULT CVIFUNC WMPLib_IWMPSyncDevice3GetdeviceId (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   char **pbstrDeviceId);

HRESULT CVIFUNC WMPLib_IWMPSyncDevice3GetpartnershipIndex (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           long *plIndex);

HRESULT CVIFUNC WMPLib_IWMPSyncDevice3Getconnected (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    VBOOL *pvbConnected);

HRESULT CVIFUNC WMPLib_IWMPSyncDevice3Getstatus (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 enum WMPLibEnum_WMPDeviceStatus *pwmpds);

HRESULT CVIFUNC WMPLib_IWMPSyncDevice3GetsyncState (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    enum WMPLibEnum_WMPSyncState *pwmpss);

HRESULT CVIFUNC WMPLib_IWMPSyncDevice3Getprogress (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   long *plProgress);

HRESULT CVIFUNC WMPLib_IWMPSyncDevice3getItemInfo (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   const char *bstrItemName,
                                                   char **pbstrVal);

HRESULT CVIFUNC WMPLib_IWMPSyncDevice3createPartnership (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         VBOOL vbShowUI);

HRESULT CVIFUNC WMPLib_IWMPSyncDevice3deletePartnership (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPSyncDevice3Start (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPSyncDevice3stop (CAObjHandle objectHandle,
                                            ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPSyncDevice3showSettings (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPSyncDevice3isIdentical (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   WMPLibObj_IWMPSyncDevice pDevice,
                                                   VBOOL *pvbool);

HRESULT CVIFUNC WMPLib_IWMPSyncDevice3setItemInfo (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   const char *bstrItemName,
                                                   const char *bstrVal);

HRESULT CVIFUNC WMPLib_IWMPSyncDevice3estimateSyncSize (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        WMPLibObj_IWMPPlaylist pNonRulePlaylist,
                                                        WMPLibObj_IWMPPlaylist pRulesPlaylist);

HRESULT CVIFUNC WMPLib_IWMPSyncDevice3cancelEstimation (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IAppDispatchGettitlebarVisible (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IAppDispatchSettitlebarVisible (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       VBOOL pVal);

HRESULT CVIFUNC WMPLib_IAppDispatchGettitlebarAutoHide (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IAppDispatchSettitlebarAutoHide (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        VBOOL pVal);

HRESULT CVIFUNC WMPLib_IAppDispatchGetcurrentTask (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   char **pVal);

HRESULT CVIFUNC WMPLib_IAppDispatchSetcurrentTask (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   const char *pVal);

HRESULT CVIFUNC WMPLib_IAppDispatchGetlibraryBasketMode (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         long *pVal);

HRESULT CVIFUNC WMPLib_IAppDispatchSetlibraryBasketMode (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         long pVal);

HRESULT CVIFUNC WMPLib_IAppDispatchGetlibraryBasketWidth (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          long *pVal);

HRESULT CVIFUNC WMPLib_IAppDispatchGetbreadcrumbItemCount (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           long *pVal);

HRESULT CVIFUNC WMPLib_IAppDispatchGetbreadcrumbItemName (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          long lIndex,
                                                          char **pVal);

HRESULT CVIFUNC WMPLib_IAppDispatchGetbreadcrumbItemHasMenu (CAObjHandle objectHandle,
                                                             ERRORINFO *errorInfo,
                                                             long lIndex,
                                                             VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IAppDispatchbreadcrumbItemClick (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        long lIndex);

HRESULT CVIFUNC WMPLib_IAppDispatchGetsettingsVisible (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IAppDispatchSetsettingsVisible (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       VBOOL pVal);

HRESULT CVIFUNC WMPLib_IAppDispatchGetplaylistVisible (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IAppDispatchSetplaylistVisible (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       VBOOL pVal);

HRESULT CVIFUNC WMPLib_IAppDispatchgotoSkinMode (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IAppDispatchgotoPlayerMode (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IAppDispatchgotoLibraryMode (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    long lButton);

HRESULT CVIFUNC WMPLib_IAppDispatchnavigatePrevious (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IAppDispatchnavigateNext (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IAppDispatchgoFullScreen (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IAppDispatchGetfullScreenEnabled (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IAppDispatchGetserviceLoginVisible (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IAppDispatchGetserviceLoginSignedIn (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo,
                                                            VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IAppDispatchserviceLogin (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IAppDispatchserviceLogout (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IAppDispatchGetserviceGetInfo (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      const char *bstrItem,
                                                      VARIANT *pValue);

HRESULT CVIFUNC WMPLib_IAppDispatchGetnavigatePreviousEnabled (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo,
                                                               VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IAppDispatchGetnavigateNextEnabled (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IAppDispatchnavigateToAddress (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      const char *address);

HRESULT CVIFUNC WMPLib_IAppDispatchGetglassEnabled (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IAppDispatchGetinVistaPlus (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IAppDispatchadjustLeft (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo,
                                               long nDistance);

HRESULT CVIFUNC WMPLib_IAppDispatchGettaskbarVisible (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IAppDispatchSettaskbarVisible (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      VBOOL pVal);

HRESULT CVIFUNC WMPLib_IAppDispatchGetDPI (CAObjHandle objectHandle,
                                           ERRORINFO *errorInfo, long *pVal);

HRESULT CVIFUNC WMPLib_IAppDispatchGetpreviousEnabled (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IAppDispatchGetplayLibraryItemEnabled (CAObjHandle objectHandle,
                                                              ERRORINFO *errorInfo,
                                                              VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IAppDispatchprevious (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IAppDispatchGettitlebarCurrentlyVisible (CAObjHandle objectHandle,
                                                                ERRORINFO *errorInfo,
                                                                VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IAppDispatchGetmenubarCurrentlyVisible (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo,
                                                               VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IAppDispatchGetbgPluginRunning (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IAppDispatchconfigurePlugins (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     long nType);

HRESULT CVIFUNC WMPLib_IAppDispatchgetTimeString (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  double dTime, char **pVal);

HRESULT CVIFUNC WMPLib_IAppDispatchGetmaximized (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IAppDispatchGettop (CAObjHandle objectHandle,
                                           ERRORINFO *errorInfo, long *pVal);

HRESULT CVIFUNC WMPLib_IAppDispatchSettop (CAObjHandle objectHandle,
                                           ERRORINFO *errorInfo, long pVal);

HRESULT CVIFUNC WMPLib_IAppDispatchGetleft (CAObjHandle objectHandle,
                                            ERRORINFO *errorInfo, long *pVal);

HRESULT CVIFUNC WMPLib_IAppDispatchSetleft (CAObjHandle objectHandle,
                                            ERRORINFO *errorInfo, long pVal);

HRESULT CVIFUNC WMPLib_IAppDispatchGetwidth (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo, long *pVal);

HRESULT CVIFUNC WMPLib_IAppDispatchSetwidth (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo, long pVal);

HRESULT CVIFUNC WMPLib_IAppDispatchGetheight (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo, long *pVal);

HRESULT CVIFUNC WMPLib_IAppDispatchSetheight (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo, long pVal);

HRESULT CVIFUNC WMPLib_IAppDispatchsetWindowPos (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo, long lTop,
                                                 long lLeft, long lWidth,
                                                 long lHeight);

HRESULT CVIFUNC WMPLib_IAppDispatchlogData (CAObjHandle objectHandle,
                                            ERRORINFO *errorInfo, const char *ID,
                                            const char *data);

HRESULT CVIFUNC WMPLib_IAppDispatchGetpowerPersonality (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        char **pVal);

HRESULT CVIFUNC WMPLib_IAppDispatchnavigateNamespace (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      const char *address);

HRESULT CVIFUNC WMPLib_IAppDispatchGetexclusiveService (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        char **pVal);

HRESULT CVIFUNC WMPLib_IAppDispatchSetwindowText (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  const char *newValue);

HRESULT CVIFUNC WMPLib_IAppDispatchGetresourceIdForDpi (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        long iResourceId,
                                                        long *pVal);

HRESULT CVIFUNC WMPLib_IWMPSafeBrowserGetURL (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo, char **pVal);

HRESULT CVIFUNC WMPLib_IWMPSafeBrowserSetURL (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo,
                                              const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPSafeBrowserGetstatus (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 long *pVal);

HRESULT CVIFUNC WMPLib_IWMPSafeBrowserGetpendingDownloads (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           long *pVal);

HRESULT CVIFUNC WMPLib_IWMPSafeBrowsershowSAMIText (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    const char *samiText);

HRESULT CVIFUNC WMPLib_IWMPSafeBrowsershowLyrics (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  const char *lyrics);

HRESULT CVIFUNC WMPLib_IWMPSafeBrowserloadSpecialPage (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       const char *pageName);

HRESULT CVIFUNC WMPLib_IWMPSafeBrowsergoBack (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPSafeBrowsergoForward (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPSafeBrowserstop (CAObjHandle objectHandle,
                                            ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPSafeBrowserrefresh (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPSafeBrowserGetbaseURL (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  char **pVal);

HRESULT CVIFUNC WMPLib_IWMPSafeBrowserGetfullURL (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  char **pVal);

HRESULT CVIFUNC WMPLib_IWMPSafeBrowserGetsecureLock (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     long *pVal);

HRESULT CVIFUNC WMPLib_IWMPSafeBrowserGetbusy (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo, VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPSafeBrowsershowCert (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPObjectExtendedPropsGetID (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     char **pVal);

HRESULT CVIFUNC WMPLib_IWMPObjectExtendedPropsGetelementType (CAObjHandle objectHandle,
                                                              ERRORINFO *errorInfo,
                                                              char **pVal);

HRESULT CVIFUNC WMPLib_IWMPObjectExtendedPropsGetleft (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       long *pVal);

HRESULT CVIFUNC WMPLib_IWMPObjectExtendedPropsSetleft (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       long pVal);

HRESULT CVIFUNC WMPLib_IWMPObjectExtendedPropsGettop (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      long *pVal);

HRESULT CVIFUNC WMPLib_IWMPObjectExtendedPropsSettop (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      long pVal);

HRESULT CVIFUNC WMPLib_IWMPObjectExtendedPropsGetright (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        long *pVal);

HRESULT CVIFUNC WMPLib_IWMPObjectExtendedPropsSetright (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        long pVal);

HRESULT CVIFUNC WMPLib_IWMPObjectExtendedPropsGetbottom (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         long *pVal);

HRESULT CVIFUNC WMPLib_IWMPObjectExtendedPropsSetbottom (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         long pVal);

HRESULT CVIFUNC WMPLib_IWMPObjectExtendedPropsGetwidth (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        long *pVal);

HRESULT CVIFUNC WMPLib_IWMPObjectExtendedPropsSetwidth (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        long pVal);

HRESULT CVIFUNC WMPLib_IWMPObjectExtendedPropsGetheight (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         long *pVal);

HRESULT CVIFUNC WMPLib_IWMPObjectExtendedPropsSetheight (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         long pVal);

HRESULT CVIFUNC WMPLib_IWMPObjectExtendedPropsGetzIndex (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         long *pVal);

HRESULT CVIFUNC WMPLib_IWMPObjectExtendedPropsSetzIndex (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         long pVal);

HRESULT CVIFUNC WMPLib_IWMPObjectExtendedPropsGetclippingImage (CAObjHandle objectHandle,
                                                                ERRORINFO *errorInfo,
                                                                char **pVal);

HRESULT CVIFUNC WMPLib_IWMPObjectExtendedPropsSetclippingImage (CAObjHandle objectHandle,
                                                                ERRORINFO *errorInfo,
                                                                const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPObjectExtendedPropsGetclippingColor (CAObjHandle objectHandle,
                                                                ERRORINFO *errorInfo,
                                                                char **pVal);

HRESULT CVIFUNC WMPLib_IWMPObjectExtendedPropsSetclippingColor (CAObjHandle objectHandle,
                                                                ERRORINFO *errorInfo,
                                                                const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPObjectExtendedPropsGetvisible (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPObjectExtendedPropsSetvisible (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPObjectExtendedPropsGetenabled (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPObjectExtendedPropsSetenabled (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPObjectExtendedPropsGettabStop (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPObjectExtendedPropsSettabStop (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPObjectExtendedPropsGetpassThrough (CAObjHandle objectHandle,
                                                              ERRORINFO *errorInfo,
                                                              VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPObjectExtendedPropsSetpassThrough (CAObjHandle objectHandle,
                                                              ERRORINFO *errorInfo,
                                                              VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPObjectExtendedPropsGethorizontalAlignment (CAObjHandle objectHandle,
                                                                      ERRORINFO *errorInfo,
                                                                      char **pVal);

HRESULT CVIFUNC WMPLib_IWMPObjectExtendedPropsSethorizontalAlignment (CAObjHandle objectHandle,
                                                                      ERRORINFO *errorInfo,
                                                                      const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPObjectExtendedPropsGetverticalAlignment (CAObjHandle objectHandle,
                                                                    ERRORINFO *errorInfo,
                                                                    char **pVal);

HRESULT CVIFUNC WMPLib_IWMPObjectExtendedPropsSetverticalAlignment (CAObjHandle objectHandle,
                                                                    ERRORINFO *errorInfo,
                                                                    const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPObjectExtendedPropsmoveTo (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      long newX, long newY,
                                                      long moveTime);

HRESULT CVIFUNC WMPLib_IWMPObjectExtendedPropsslideTo (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       long newX, long newY,
                                                       long moveTime);

HRESULT CVIFUNC WMPLib_IWMPObjectExtendedPropsmoveSizeTo (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          long newX, long newY,
                                                          long newWidth,
                                                          long newHeight,
                                                          long moveTime,
                                                          VBOOL fSlide);

HRESULT CVIFUNC WMPLib_IWMPObjectExtendedPropsGetalphaBlend (CAObjHandle objectHandle,
                                                             ERRORINFO *errorInfo,
                                                             long *pVal);

HRESULT CVIFUNC WMPLib_IWMPObjectExtendedPropsSetalphaBlend (CAObjHandle objectHandle,
                                                             ERRORINFO *errorInfo,
                                                             long pVal);

HRESULT CVIFUNC WMPLib_IWMPObjectExtendedPropsalphaBlendTo (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo,
                                                            long newVal,
                                                            long alphaTime);

HRESULT CVIFUNC WMPLib_IWMPObjectExtendedPropsGetaccName (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          char **pszName);

HRESULT CVIFUNC WMPLib_IWMPObjectExtendedPropsSetaccName (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          const char *pszName);

HRESULT CVIFUNC WMPLib_IWMPObjectExtendedPropsGetaccDescription (CAObjHandle objectHandle,
                                                                 ERRORINFO *errorInfo,
                                                                 char **pszDesc);

HRESULT CVIFUNC WMPLib_IWMPObjectExtendedPropsSetaccDescription (CAObjHandle objectHandle,
                                                                 ERRORINFO *errorInfo,
                                                                 const char *pszDesc);

HRESULT CVIFUNC WMPLib_IWMPObjectExtendedPropsGetaccKeyboardShortcut (CAObjHandle objectHandle,
                                                                      ERRORINFO *errorInfo,
                                                                      char **pszShortcut);

HRESULT CVIFUNC WMPLib_IWMPObjectExtendedPropsSetaccKeyboardShortcut (CAObjHandle objectHandle,
                                                                      ERRORINFO *errorInfo,
                                                                      const char *pszShortcut);

HRESULT CVIFUNC WMPLib_IWMPObjectExtendedPropsGetresizeImages (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo,
                                                               VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPObjectExtendedPropsSetresizeImages (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo,
                                                               VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPObjectExtendedPropsGetnineGridMargins (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo,
                                                                  char **pszMargins);

HRESULT CVIFUNC WMPLib_IWMPObjectExtendedPropsSetnineGridMargins (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo,
                                                                  const char *pszMargins);

HRESULT CVIFUNC WMPLib_IWMPObjectExtendedPropsGetresizeOptimize (CAObjHandle objectHandle,
                                                                 ERRORINFO *errorInfo,
                                                                 char **ppszResizeOptimize);

HRESULT CVIFUNC WMPLib_IWMPObjectExtendedPropsSetresizeOptimize (CAObjHandle objectHandle,
                                                                 ERRORINFO *errorInfo,
                                                                 const char *ppszResizeOptimize);

HRESULT CVIFUNC WMPLib_IWMPObjectExtendedPropsGetrotation (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           float *pfVal);

HRESULT CVIFUNC WMPLib_IWMPObjectExtendedPropsSetrotation (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           float pfVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewGetID (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo, char **pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewGetelementType (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        char **pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewGetleft (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 long *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewSetleft (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo, long pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewGettop (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo, long *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewSettop (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo, long pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewGetright (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  long *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewSetright (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  long pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewGetbottom (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   long *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewSetbottom (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   long pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewGetwidth (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  long *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewSetwidth (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  long pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewGetheight (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   long *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewSetheight (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   long pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewGetzIndex (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   long *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewSetzIndex (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   long pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewGetclippingImage (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          char **pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewSetclippingImage (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewGetclippingColor (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          char **pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewSetclippingColor (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewGetvisible (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewSetvisible (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewGetenabled (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewSetenabled (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewGettabStop (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewSettabStop (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewGetpassThrough (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewSetpassThrough (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewGethorizontalAlignment (CAObjHandle objectHandle,
                                                                ERRORINFO *errorInfo,
                                                                char **pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewSethorizontalAlignment (CAObjHandle objectHandle,
                                                                ERRORINFO *errorInfo,
                                                                const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewGetverticalAlignment (CAObjHandle objectHandle,
                                                              ERRORINFO *errorInfo,
                                                              char **pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewSetverticalAlignment (CAObjHandle objectHandle,
                                                              ERRORINFO *errorInfo,
                                                              const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewmoveTo (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo, long newX,
                                                long newY, long moveTime);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewslideTo (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo, long newX,
                                                 long newY, long moveTime);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewmoveSizeTo (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    long newX, long newY,
                                                    long newWidth,
                                                    long newHeight,
                                                    long moveTime, VBOOL fSlide);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewGetalphaBlend (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       long *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewSetalphaBlend (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       long pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewalphaBlendTo (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      long newVal,
                                                      long alphaTime);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewGetaccName (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    char **pszName);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewSetaccName (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    const char *pszName);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewGetaccDescription (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           char **pszDesc);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewSetaccDescription (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           const char *pszDesc);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewGetaccKeyboardShortcut (CAObjHandle objectHandle,
                                                                ERRORINFO *errorInfo,
                                                                char **pszShortcut);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewSetaccKeyboardShortcut (CAObjHandle objectHandle,
                                                                ERRORINFO *errorInfo,
                                                                const char *pszShortcut);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewGetresizeImages (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewSetresizeImages (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewGetnineGridMargins (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo,
                                                            char **pszMargins);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewSetnineGridMargins (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo,
                                                            const char *pszMargins);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewGetresizeOptimize (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           char **ppszResizeOptimize);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewSetresizeOptimize (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           const char *ppszResizeOptimize);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewGetrotation (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     float *pfVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewSetrotation (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     float pfVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewGettransparencyColor (CAObjHandle objectHandle,
                                                              ERRORINFO *errorInfo,
                                                              char **pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewSettransparencyColor (CAObjHandle objectHandle,
                                                              ERRORINFO *errorInfo,
                                                              const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewGetbackgroundColor (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo,
                                                            char **pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewSetbackgroundColor (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo,
                                                            const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewGetbackgroundImage (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo,
                                                            char **pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewSetbackgroundImage (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo,
                                                            const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewGetbackgroundTiled (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo,
                                                            VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewSetbackgroundTiled (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo,
                                                            VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewGetbackgroundImageHueShift (CAObjHandle objectHandle,
                                                                    ERRORINFO *errorInfo,
                                                                    float *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewSetbackgroundImageHueShift (CAObjHandle objectHandle,
                                                                    ERRORINFO *errorInfo,
                                                                    float pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewGetbackgroundImageSaturation (CAObjHandle objectHandle,
                                                                      ERRORINFO *errorInfo,
                                                                      float *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewSetbackgroundImageSaturation (CAObjHandle objectHandle,
                                                                      ERRORINFO *errorInfo,
                                                                      float pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewGetresizeBackgroundImage (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo,
                                                                  VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSubViewSetresizeBackgroundImage (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo,
                                                                  VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewGetID (CAObjHandle objectHandle,
                                            ERRORINFO *errorInfo, char **pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewGetelementType (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     char **pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewGetleft (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo, long *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewSetleft (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo, long pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewGettop (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo, long *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewSettop (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo, long pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewGetright (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo, long *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewSetright (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo, long pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewGetbottom (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo, long *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewSetbottom (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo, long pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewGetwidth (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo, long *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewSetwidth (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo, long pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewGetheight (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo, long *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewSetheight (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo, long pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewGetzIndex (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo, long *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewSetzIndex (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo, long pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewGetclippingImage (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       char **pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewSetclippingImage (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewGetclippingColor (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       char **pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewSetclippingColor (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewGetvisible (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewSetvisible (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewGetenabled (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewSetenabled (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewGettabStop (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewSettabStop (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewGetpassThrough (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewSetpassThrough (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewGethorizontalAlignment (CAObjHandle objectHandle,
                                                             ERRORINFO *errorInfo,
                                                             char **pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewSethorizontalAlignment (CAObjHandle objectHandle,
                                                             ERRORINFO *errorInfo,
                                                             const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewGetverticalAlignment (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           char **pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewSetverticalAlignment (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewmoveTo (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo, long newX,
                                             long newY, long moveTime);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewslideTo (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo, long newX,
                                              long newY, long moveTime);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewmoveSizeTo (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo, long newX,
                                                 long newY, long newWidth,
                                                 long newHeight, long moveTime,
                                                 VBOOL fSlide);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewGetalphaBlend (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    long *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewSetalphaBlend (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    long pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewalphaBlendTo (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   long newVal, long alphaTime);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewGetaccName (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 char **pszName);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewSetaccName (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 const char *pszName);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewGetaccDescription (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        char **pszDesc);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewSetaccDescription (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        const char *pszDesc);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewGetaccKeyboardShortcut (CAObjHandle objectHandle,
                                                             ERRORINFO *errorInfo,
                                                             char **pszShortcut);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewSetaccKeyboardShortcut (CAObjHandle objectHandle,
                                                             ERRORINFO *errorInfo,
                                                             const char *pszShortcut);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewGetresizeImages (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewSetresizeImages (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewGetnineGridMargins (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         char **pszMargins);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewSetnineGridMargins (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         const char *pszMargins);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewGetresizeOptimize (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        char **ppszResizeOptimize);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewSetresizeOptimize (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        const char *ppszResizeOptimize);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewGetrotation (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  float *pfVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewSetrotation (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  float pfVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewGettransparencyColor (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           char **pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewSettransparencyColor (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewGetbackgroundColor (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         char **pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewSetbackgroundColor (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewGetbackgroundImage (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         char **pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewSetbackgroundImage (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewGetbackgroundTiled (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewSetbackgroundTiled (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewGetbackgroundImageHueShift (CAObjHandle objectHandle,
                                                                 ERRORINFO *errorInfo,
                                                                 float *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewSetbackgroundImageHueShift (CAObjHandle objectHandle,
                                                                 ERRORINFO *errorInfo,
                                                                 float pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewGetbackgroundImageSaturation (CAObjHandle objectHandle,
                                                                   ERRORINFO *errorInfo,
                                                                   float *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewSetbackgroundImageSaturation (CAObjHandle objectHandle,
                                                                   ERRORINFO *errorInfo,
                                                                   float pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewGetresizeBackgroundImage (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo,
                                                               VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewSetresizeBackgroundImage (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo,
                                                               VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewGettitle (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo, char **pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewSettitle (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo,
                                               const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewGetcategory (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  char **pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewSetcategory (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewGetfocusObjectID (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       char **pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewSetfocusObjectID (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewGettitleBar (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewGetresizable (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewGettimerInterval (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       long *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewSettimerInterval (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       long pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewGetminWidth (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  long *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewSetminWidth (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  long pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewGetmaxWidth (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  long *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewSetmaxWidth (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  long pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewGetminHeight (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   long *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewSetminHeight (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   long pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewGetmaxHeight (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   long *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewSetmaxHeight (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   long pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewclose (CAObjHandle objectHandle,
                                            ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewminimize (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewmaximize (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewrestore (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewsize (CAObjHandle objectHandle,
                                           ERRORINFO *errorInfo,
                                           const char *bstrDirection);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewreturnToMediaCenter (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewupdateWindow (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewGetmaximized (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutViewGetminimized (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPEventObjectGetsrcElement (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     CAObjHandle *p);

HRESULT CVIFUNC WMPLib_IWMPEventObjectGetaltKey (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo, VBOOL *p);

HRESULT CVIFUNC WMPLib_IWMPEventObjectGetctrlKey (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo, VBOOL *p);

HRESULT CVIFUNC WMPLib_IWMPEventObjectGetshiftKey (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   VBOOL *p);

HRESULT CVIFUNC WMPLib_IWMPEventObjectGetfromElement (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      CAObjHandle *p);

HRESULT CVIFUNC WMPLib_IWMPEventObjectGettoElement (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    CAObjHandle *p);

HRESULT CVIFUNC WMPLib_IWMPEventObjectSetkeyCode (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo, long p);

HRESULT CVIFUNC WMPLib_IWMPEventObjectGetkeyCode (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo, long *p);

HRESULT CVIFUNC WMPLib_IWMPEventObjectGetbutton (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo, long *p);

HRESULT CVIFUNC WMPLib_IWMPEventObjectGetx (CAObjHandle objectHandle,
                                            ERRORINFO *errorInfo, long *p);

HRESULT CVIFUNC WMPLib_IWMPEventObjectGety (CAObjHandle objectHandle,
                                            ERRORINFO *errorInfo, long *p);

HRESULT CVIFUNC WMPLib_IWMPEventObjectGetclientX (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo, long *p);

HRESULT CVIFUNC WMPLib_IWMPEventObjectGetclientY (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo, long *p);

HRESULT CVIFUNC WMPLib_IWMPEventObjectGetoffsetX (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo, long *p);

HRESULT CVIFUNC WMPLib_IWMPEventObjectGetoffsetY (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo, long *p);

HRESULT CVIFUNC WMPLib_IWMPEventObjectGetscreenX (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo, long *p);

HRESULT CVIFUNC WMPLib_IWMPEventObjectGetscreenY (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo, long *p);

HRESULT CVIFUNC WMPLib_IWMPEventObjectGetscreenWidth (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      long *p);

HRESULT CVIFUNC WMPLib_IWMPEventObjectGetscreenHeight (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       long *p);

HRESULT CVIFUNC WMPLib_IWMPEventObjectGetpenOrTouch (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     VBOOL *p);

HRESULT CVIFUNC WMPLib_IWMPThemeGettitle (CAObjHandle objectHandle,
                                          ERRORINFO *errorInfo, char **pVal);

HRESULT CVIFUNC WMPLib_IWMPThemeGetversion (CAObjHandle objectHandle,
                                            ERRORINFO *errorInfo,
                                            float *pfVersion);

HRESULT CVIFUNC WMPLib_IWMPThemeGetauthorVersion (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  char **pVal);

HRESULT CVIFUNC WMPLib_IWMPThemeGetauthor (CAObjHandle objectHandle,
                                           ERRORINFO *errorInfo, char **pVal);

HRESULT CVIFUNC WMPLib_IWMPThemeGetcopyright (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo, char **pVal);

HRESULT CVIFUNC WMPLib_IWMPThemeGetcurrentViewID (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  char **pVal);

HRESULT CVIFUNC WMPLib_IWMPThemeSetcurrentViewID (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPThemeshowErrorDialog (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPThemelogString (CAObjHandle objectHandle,
                                           ERRORINFO *errorInfo,
                                           const char *stringVal);

HRESULT CVIFUNC WMPLib_IWMPThemeopenView (CAObjHandle objectHandle,
                                          ERRORINFO *errorInfo,
                                          const char *viewID);

HRESULT CVIFUNC WMPLib_IWMPThemeopenViewRelative (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  const char *viewID, long x,
                                                  long y, CAObjHandle *ppView);

HRESULT CVIFUNC WMPLib_IWMPThemecloseView (CAObjHandle objectHandle,
                                           ERRORINFO *errorInfo,
                                           const char *viewID);

HRESULT CVIFUNC WMPLib_IWMPThemeopenDialog (CAObjHandle objectHandle,
                                            ERRORINFO *errorInfo,
                                            const char *dialogType,
                                            const char *parameters, char **pVal);

HRESULT CVIFUNC WMPLib_IWMPThemeloadString (CAObjHandle objectHandle,
                                            ERRORINFO *errorInfo,
                                            const char *bstrString,
                                            char **pbstrReturn);

HRESULT CVIFUNC WMPLib_IWMPThemeloadPreference (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                const char *bstrName,
                                                char **pbstrValue);

HRESULT CVIFUNC WMPLib_IWMPThemesavePreference (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                const char *bstrName,
                                                const char *bstrValue);

HRESULT CVIFUNC WMPLib_IWMPThemeplaySound (CAObjHandle objectHandle,
                                           ERRORINFO *errorInfo,
                                           const char *bstrFilename);

HRESULT CVIFUNC WMPLib_IWMPThemeopenViewRelativeInternal (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          const char *viewID,
                                                          long nIndex, long x,
                                                          long y, long nWidth,
                                                          long nHeight,
                                                          const char *bstrHorizontalAlignment,
                                                          const char *bstrVerticalAlignment,
                                                          CAObjHandle *ppView);

HRESULT CVIFUNC WMPLib_IWMPThemesetViewPosition (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 const char *viewID, long nIndex,
                                                 long x, long y, long nWidth,
                                                 long nHeight,
                                                 const char *bstrHorizontalAlignment,
                                                 const char *bstrVerticalAlignment);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGeteffectType (CAObjHandle objectHandle,
                                                                ERRORINFO *errorInfo,
                                                                char **pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchSeteffectType (CAObjHandle objectHandle,
                                                                ERRORINFO *errorInfo,
                                                                const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGeteffectPreset (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo,
                                                                  long *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchSeteffectPreset (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo,
                                                                  long pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetsettingsView (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo,
                                                                  char **pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchSetsettingsView (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo,
                                                                  const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetvideoZoom (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo,
                                                               long *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchSetvideoZoom (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo,
                                                               long pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetvideoShrinkToFit (CAObjHandle objectHandle,
                                                                      ERRORINFO *errorInfo,
                                                                      VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchSetvideoShrinkToFit (CAObjHandle objectHandle,
                                                                      ERRORINFO *errorInfo,
                                                                      VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetvideoStretchToFit (CAObjHandle objectHandle,
                                                                       ERRORINFO *errorInfo,
                                                                       VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchSetvideoStretchToFit (CAObjHandle objectHandle,
                                                                       ERRORINFO *errorInfo,
                                                                       VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetuserVideoStretchToFit (CAObjHandle objectHandle,
                                                                           ERRORINFO *errorInfo,
                                                                           VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchSetuserVideoStretchToFit (CAObjHandle objectHandle,
                                                                           ERRORINFO *errorInfo,
                                                                           VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetshowCaptions (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo,
                                                                  VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchSetshowCaptions (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo,
                                                                  VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetshowTitles (CAObjHandle objectHandle,
                                                                ERRORINFO *errorInfo,
                                                                VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchSetshowTitles (CAObjHandle objectHandle,
                                                                ERRORINFO *errorInfo,
                                                                VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetshowEffects (CAObjHandle objectHandle,
                                                                 ERRORINFO *errorInfo,
                                                                 VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchSetshowEffects (CAObjHandle objectHandle,
                                                                 ERRORINFO *errorInfo,
                                                                 VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetshowFullScreenPlaylist (CAObjHandle objectHandle,
                                                                            ERRORINFO *errorInfo,
                                                                            VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchSetshowFullScreenPlaylist (CAObjHandle objectHandle,
                                                                            ERRORINFO *errorInfo,
                                                                            VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetcontrastMode (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo,
                                                                  char **pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchgetNamedString (CAObjHandle objectHandle,
                                                                 ERRORINFO *errorInfo,
                                                                 const char *bstrName,
                                                                 char **pbstrVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchgetDurationStringFromSeconds (CAObjHandle objectHandle,
                                                                               ERRORINFO *errorInfo,
                                                                               long lDurationVal,
                                                                               char **pbstrVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetdisplayView (CAObjHandle objectHandle,
                                                                 ERRORINFO *errorInfo,
                                                                 char **pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchSetdisplayView (CAObjHandle objectHandle,
                                                                 ERRORINFO *errorInfo,
                                                                 const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetmetadataView (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo,
                                                                  char **pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchSetmetadataView (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo,
                                                                  const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetshowSettings (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo,
                                                                  VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchSetshowSettings (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo,
                                                                  VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetshowResizeBars (CAObjHandle objectHandle,
                                                                    ERRORINFO *errorInfo,
                                                                    VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchSetshowResizeBars (CAObjHandle objectHandle,
                                                                    ERRORINFO *errorInfo,
                                                                    VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetshowPlaylist (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo,
                                                                  VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchSetshowPlaylist (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo,
                                                                  VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetshowMetadata (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo,
                                                                  VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchSetshowMetadata (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo,
                                                                  VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetsettingsWidth (CAObjHandle objectHandle,
                                                                   ERRORINFO *errorInfo,
                                                                   long *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchSetsettingsWidth (CAObjHandle objectHandle,
                                                                   ERRORINFO *errorInfo,
                                                                   long pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetsettingsHeight (CAObjHandle objectHandle,
                                                                    ERRORINFO *errorInfo,
                                                                    long *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchSetsettingsHeight (CAObjHandle objectHandle,
                                                                    ERRORINFO *errorInfo,
                                                                    long pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetplaylistWidth (CAObjHandle objectHandle,
                                                                   ERRORINFO *errorInfo,
                                                                   long *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchSetplaylistWidth (CAObjHandle objectHandle,
                                                                   ERRORINFO *errorInfo,
                                                                   long pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetplaylistHeight (CAObjHandle objectHandle,
                                                                    ERRORINFO *errorInfo,
                                                                    long *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchSetplaylistHeight (CAObjHandle objectHandle,
                                                                    ERRORINFO *errorInfo,
                                                                    long pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetmetadataWidth (CAObjHandle objectHandle,
                                                                   ERRORINFO *errorInfo,
                                                                   long *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchSetmetadataWidth (CAObjHandle objectHandle,
                                                                   ERRORINFO *errorInfo,
                                                                   long pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetmetadataHeight (CAObjHandle objectHandle,
                                                                    ERRORINFO *errorInfo,
                                                                    long *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchSetmetadataHeight (CAObjHandle objectHandle,
                                                                    ERRORINFO *errorInfo,
                                                                    long pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetfullScreenAvailable (CAObjHandle objectHandle,
                                                                         ERRORINFO *errorInfo,
                                                                         VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchSetfullScreenAvailable (CAObjHandle objectHandle,
                                                                         ERRORINFO *errorInfo,
                                                                         VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetfullScreenRequest (CAObjHandle objectHandle,
                                                                       ERRORINFO *errorInfo,
                                                                       VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchSetfullScreenRequest (CAObjHandle objectHandle,
                                                                       ERRORINFO *errorInfo,
                                                                       VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetquickHide (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo,
                                                               VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchSetquickHide (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo,
                                                               VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetdisplayPreset (CAObjHandle objectHandle,
                                                                   ERRORINFO *errorInfo,
                                                                   long *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchSetdisplayPreset (CAObjHandle objectHandle,
                                                                   ERRORINFO *errorInfo,
                                                                   long pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetsettingsPreset (CAObjHandle objectHandle,
                                                                    ERRORINFO *errorInfo,
                                                                    long *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchSetsettingsPreset (CAObjHandle objectHandle,
                                                                    ERRORINFO *errorInfo,
                                                                    long pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetmetadataPreset (CAObjHandle objectHandle,
                                                                    ERRORINFO *errorInfo,
                                                                    long *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchSetmetadataPreset (CAObjHandle objectHandle,
                                                                    ERRORINFO *errorInfo,
                                                                    long pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetuserDisplayView (CAObjHandle objectHandle,
                                                                     ERRORINFO *errorInfo,
                                                                     char **pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetuserWMPDisplayView (CAObjHandle objectHandle,
                                                                        ERRORINFO *errorInfo,
                                                                        char **pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetuserDisplayPreset (CAObjHandle objectHandle,
                                                                       ERRORINFO *errorInfo,
                                                                       long *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetuserWMPDisplayPreset (CAObjHandle objectHandle,
                                                                          ERRORINFO *errorInfo,
                                                                          long *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetdynamicRangeControl (CAObjHandle objectHandle,
                                                                         ERRORINFO *errorInfo,
                                                                         long *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchSetdynamicRangeControl (CAObjHandle objectHandle,
                                                                         ERRORINFO *errorInfo,
                                                                         long pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetslowRate (CAObjHandle objectHandle,
                                                              ERRORINFO *errorInfo,
                                                              float *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchSetslowRate (CAObjHandle objectHandle,
                                                              ERRORINFO *errorInfo,
                                                              float pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetfastRate (CAObjHandle objectHandle,
                                                              ERRORINFO *errorInfo,
                                                              float *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchSetfastRate (CAObjHandle objectHandle,
                                                              ERRORINFO *errorInfo,
                                                              float pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetbuttonHueShift (CAObjHandle objectHandle,
                                                                    ERRORINFO *errorInfo,
                                                                    float *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchSetbuttonHueShift (CAObjHandle objectHandle,
                                                                    ERRORINFO *errorInfo,
                                                                    float pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetbuttonSaturation (CAObjHandle objectHandle,
                                                                      ERRORINFO *errorInfo,
                                                                      float *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchSetbuttonSaturation (CAObjHandle objectHandle,
                                                                      ERRORINFO *errorInfo,
                                                                      float pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetbackHueShift (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo,
                                                                  float *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchSetbackHueShift (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo,
                                                                  float pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetbackSaturation (CAObjHandle objectHandle,
                                                                    ERRORINFO *errorInfo,
                                                                    float *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchSetbackSaturation (CAObjHandle objectHandle,
                                                                    ERRORINFO *errorInfo,
                                                                    float pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetvizRequest (CAObjHandle objectHandle,
                                                                ERRORINFO *errorInfo,
                                                                long *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchSetvizRequest (CAObjHandle objectHandle,
                                                                ERRORINFO *errorInfo,
                                                                long pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetappColorLight (CAObjHandle objectHandle,
                                                                   ERRORINFO *errorInfo,
                                                                   char **pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetappColorMedium (CAObjHandle objectHandle,
                                                                    ERRORINFO *errorInfo,
                                                                    char **pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetappColorDark (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo,
                                                                  char **pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGettoolbarButtonHighlight (CAObjHandle objectHandle,
                                                                            ERRORINFO *errorInfo,
                                                                            char **pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGettoolbarButtonShadow (CAObjHandle objectHandle,
                                                                         ERRORINFO *errorInfo,
                                                                         char **pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGettoolbarButtonFace (CAObjHandle objectHandle,
                                                                       ERRORINFO *errorInfo,
                                                                       char **pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetitemPlayingColor (CAObjHandle objectHandle,
                                                                      ERRORINFO *errorInfo,
                                                                      char **pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetitemPlayingBackgroundColor (CAObjHandle objectHandle,
                                                                                ERRORINFO *errorInfo,
                                                                                char **pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetitemErrorColor (CAObjHandle objectHandle,
                                                                    ERRORINFO *errorInfo,
                                                                    char **pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetappColorLimited (CAObjHandle objectHandle,
                                                                     ERRORINFO *errorInfo,
                                                                     VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetappColorBlackBackground (CAObjHandle objectHandle,
                                                                             ERRORINFO *errorInfo,
                                                                             VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchSetappColorBlackBackground (CAObjHandle objectHandle,
                                                                             ERRORINFO *errorInfo,
                                                                             VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetappColorVideoBorder (CAObjHandle objectHandle,
                                                                         ERRORINFO *errorInfo,
                                                                         char **pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchSetappColorVideoBorder (CAObjHandle objectHandle,
                                                                         ERRORINFO *errorInfo,
                                                                         const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetappColorAux1 (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo,
                                                                  char **pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetappColorAux2 (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo,
                                                                  char **pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetappColorAux3 (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo,
                                                                  char **pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetappColorAux4 (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo,
                                                                  char **pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetappColorAux5 (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo,
                                                                  char **pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetappColorAux6 (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo,
                                                                  char **pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetappColorAux7 (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo,
                                                                  char **pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetappColorAux8 (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo,
                                                                  char **pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetappColorAux9 (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo,
                                                                  char **pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetappColorAux10 (CAObjHandle objectHandle,
                                                                   ERRORINFO *errorInfo,
                                                                   char **pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetappColorAux11 (CAObjHandle objectHandle,
                                                                   ERRORINFO *errorInfo,
                                                                   char **pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetappColorAux12 (CAObjHandle objectHandle,
                                                                   ERRORINFO *errorInfo,
                                                                   char **pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetappColorAux13 (CAObjHandle objectHandle,
                                                                   ERRORINFO *errorInfo,
                                                                   char **pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetappColorAux14 (CAObjHandle objectHandle,
                                                                   ERRORINFO *errorInfo,
                                                                   char **pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetappColorAux15 (CAObjHandle objectHandle,
                                                                   ERRORINFO *errorInfo,
                                                                   char **pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetstatus (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo,
                                                            char **pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchSetstatus (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo,
                                                            const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetuserWMPSettingsView (CAObjHandle objectHandle,
                                                                         ERRORINFO *errorInfo,
                                                                         char **pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetuserWMPSettingsPreset (CAObjHandle objectHandle,
                                                                           ERRORINFO *errorInfo,
                                                                           long *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetuserWMPShowSettings (CAObjHandle objectHandle,
                                                                         ERRORINFO *errorInfo,
                                                                         VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetuserWMPMetadataView (CAObjHandle objectHandle,
                                                                         ERRORINFO *errorInfo,
                                                                         char **pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetuserWMPMetadataPreset (CAObjHandle objectHandle,
                                                                           ERRORINFO *errorInfo,
                                                                           long *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetuserWMPShowMetadata (CAObjHandle objectHandle,
                                                                         ERRORINFO *errorInfo,
                                                                         VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetcaptionsHeight (CAObjHandle objectHandle,
                                                                    ERRORINFO *errorInfo,
                                                                    long *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchSetcaptionsHeight (CAObjHandle objectHandle,
                                                                    ERRORINFO *errorInfo,
                                                                    long pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetsnapToVideo (CAObjHandle objectHandle,
                                                                 ERRORINFO *errorInfo,
                                                                 VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchSetsnapToVideo (CAObjHandle objectHandle,
                                                                 ERRORINFO *errorInfo,
                                                                 VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetpinFullScreenControls (CAObjHandle objectHandle,
                                                                           ERRORINFO *errorInfo,
                                                                           VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchSetpinFullScreenControls (CAObjHandle objectHandle,
                                                                           ERRORINFO *errorInfo,
                                                                           VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetisMultiMon (CAObjHandle objectHandle,
                                                                ERRORINFO *errorInfo,
                                                                VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetexclusiveHueShift (CAObjHandle objectHandle,
                                                                       ERRORINFO *errorInfo,
                                                                       float *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchSetexclusiveHueShift (CAObjHandle objectHandle,
                                                                       ERRORINFO *errorInfo,
                                                                       float pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetexclusiveSaturation (CAObjHandle objectHandle,
                                                                         ERRORINFO *errorInfo,
                                                                         float *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchSetexclusiveSaturation (CAObjHandle objectHandle,
                                                                         ERRORINFO *errorInfo,
                                                                         float pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetthemeBkgColorIsActive (CAObjHandle objectHandle,
                                                                           ERRORINFO *errorInfo,
                                                                           VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchSetthemeBkgColorIsActive (CAObjHandle objectHandle,
                                                                           ERRORINFO *errorInfo,
                                                                           VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetthemeBkgColorActive (CAObjHandle objectHandle,
                                                                         ERRORINFO *errorInfo,
                                                                         char **pVal);

HRESULT CVIFUNC WMPLib_IWMPLayoutSettingsDispatchGetthemeBkgColorInactive (CAObjHandle objectHandle,
                                                                           ERRORINFO *errorInfo,
                                                                           char **pVal);

HRESULT CVIFUNC WMPLib_IWMPWindowsetWindowPos (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo, long x,
                                               long y, long height, long width);

HRESULT CVIFUNC WMPLib_IWMPWindowGetframeRate (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo, long *pVal);

HRESULT CVIFUNC WMPLib_IWMPWindowSetframeRate (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo, long pVal);

HRESULT CVIFUNC WMPLib_IWMPWindowGetmouseX (CAObjHandle objectHandle,
                                            ERRORINFO *errorInfo, long *pVal);

HRESULT CVIFUNC WMPLib_IWMPWindowGetmouseY (CAObjHandle objectHandle,
                                            ERRORINFO *errorInfo, long *pVal);

HRESULT CVIFUNC WMPLib_IWMPWindowSetonsizing (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo,
                                              CAObjHandle newValue);

HRESULT CVIFUNC WMPLib_IWMPWindowopenViewAlwaysOnTop (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      const char *bstrViewID);

HRESULT CVIFUNC WMPLib_IWMPBrandDispatchGetfullServiceName (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo,
                                                            char **pVal);

HRESULT CVIFUNC WMPLib_IWMPBrandDispatchGetfriendlyName (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         char **pVal);

HRESULT CVIFUNC WMPLib_IWMPBrandDispatchGetguideButtonText (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo,
                                                            char **pVal);

HRESULT CVIFUNC WMPLib_IWMPBrandDispatchGetguideButtonTip (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           char **pVal);

HRESULT CVIFUNC WMPLib_IWMPBrandDispatchGetguideMenuText (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          char **pVal);

HRESULT CVIFUNC WMPLib_IWMPBrandDispatchGetguideAccText (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         char **pVal);

HRESULT CVIFUNC WMPLib_IWMPBrandDispatchGettask1ButtonText (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo,
                                                            char **pVal);

HRESULT CVIFUNC WMPLib_IWMPBrandDispatchGettask1ButtonTip (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           char **pVal);

HRESULT CVIFUNC WMPLib_IWMPBrandDispatchGettask1MenuText (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          char **pVal);

HRESULT CVIFUNC WMPLib_IWMPBrandDispatchGettask1AccText (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         char **pVal);

HRESULT CVIFUNC WMPLib_IWMPBrandDispatchGetguideUrl (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     char **pVal);

HRESULT CVIFUNC WMPLib_IWMPBrandDispatchGettask1Url (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     char **pVal);

HRESULT CVIFUNC WMPLib_IWMPBrandDispatchGetimageLargeUrl (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          char **pVal);

HRESULT CVIFUNC WMPLib_IWMPBrandDispatchGetimageSmallUrl (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          char **pVal);

HRESULT CVIFUNC WMPLib_IWMPBrandDispatchGetimageMenuUrl (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         char **pVal);

HRESULT CVIFUNC WMPLib_IWMPBrandDispatchGetinfoCenterUrl (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          char **pVal);

HRESULT CVIFUNC WMPLib_IWMPBrandDispatchGetalbumInfoUrl (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         char **pVal);

HRESULT CVIFUNC WMPLib_IWMPBrandDispatchGetbuyCDUrl (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     char **pVal);

HRESULT CVIFUNC WMPLib_IWMPBrandDispatchGethtmlViewUrl (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        char **pVal);

HRESULT CVIFUNC WMPLib_IWMPBrandDispatchGetnavigateUrl (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        char **pVal);

HRESULT CVIFUNC WMPLib_IWMPBrandDispatchGetcookieUrl (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      char **pVal);

HRESULT CVIFUNC WMPLib_IWMPBrandDispatchGetdownloadStatusUrl (CAObjHandle objectHandle,
                                                              ERRORINFO *errorInfo,
                                                              char **pVal);

HRESULT CVIFUNC WMPLib_IWMPBrandDispatchGetcolorPlayer (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        char **pVal);

HRESULT CVIFUNC WMPLib_IWMPBrandDispatchGetcolorPlayerText (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo,
                                                            char **pVal);

HRESULT CVIFUNC WMPLib_IWMPBrandDispatchGetnavigateDispid (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           long *pVal);

HRESULT CVIFUNC WMPLib_IWMPBrandDispatchGetnavigateParams (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           char **pVal);

HRESULT CVIFUNC WMPLib_IWMPBrandDispatchGetnavigatePane (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         char **pVal);

HRESULT CVIFUNC WMPLib_IWMPBrandDispatchGetselectedPane (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         char **pVal);

HRESULT CVIFUNC WMPLib_IWMPBrandDispatchSetselectedPane (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPBrandDispatchsetNavigateProps (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          const char *bstrPane,
                                                          long lDispid,
                                                          const char *bstrParams);

HRESULT CVIFUNC WMPLib_IWMPBrandDispatchgetMediaParams (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        LPUNKNOWN pObject,
                                                        const char *bstrURL,
                                                        char **pbstrResult);

HRESULT CVIFUNC WMPLib_IWMPBrandDispatchSetselectedTask (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         long newValue);

HRESULT CVIFUNC WMPLib_IWMPBrandDispatchGetcontentPartnerSelected (CAObjHandle objectHandle,
                                                                   ERRORINFO *errorInfo,
                                                                   VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchGetviewFriendlyName (CAObjHandle objectHandle,
                                                                        ERRORINFO *errorInfo,
                                                                        const char *bstrView,
                                                                        char **pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchGetviewPresetCount (CAObjHandle objectHandle,
                                                                       ERRORINFO *errorInfo,
                                                                       const char *bstrView,
                                                                       long *pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchGetviewPresetName (CAObjHandle objectHandle,
                                                                      ERRORINFO *errorInfo,
                                                                      const char *bstrView,
                                                                      long nPresetIndex,
                                                                      char **pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchGeteffectFriendlyName (CAObjHandle objectHandle,
                                                                          ERRORINFO *errorInfo,
                                                                          const char *bstrEffect,
                                                                          char **pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchGeteffectPresetName (CAObjHandle objectHandle,
                                                                        ERRORINFO *errorInfo,
                                                                        const char *bstrEffect,
                                                                        long nPresetIndex,
                                                                        char **pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchresolveDisplayView (CAObjHandle objectHandle,
                                                                       ERRORINFO *errorInfo,
                                                                       VBOOL fSafe,
                                                                       char **pbstrVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchisValidDisplayView (CAObjHandle objectHandle,
                                                                       ERRORINFO *errorInfo,
                                                                       const char *bstrView,
                                                                       VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchgetSkinFile (CAObjHandle objectHandle,
                                                                ERRORINFO *errorInfo,
                                                                char **pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchGetcaptionsAvailable (CAObjHandle objectHandle,
                                                                         ERRORINFO *errorInfo,
                                                                         VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchGetlinkAvailable (CAObjHandle objectHandle,
                                                                     ERRORINFO *errorInfo,
                                                                     long *pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchGetlinkRequest (CAObjHandle objectHandle,
                                                                   ERRORINFO *errorInfo,
                                                                   long *pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchSetlinkRequest (CAObjHandle objectHandle,
                                                                   ERRORINFO *errorInfo,
                                                                   long pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchGetlinkRequestParams (CAObjHandle objectHandle,
                                                                         ERRORINFO *errorInfo,
                                                                         char **pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchSetlinkRequestParams (CAObjHandle objectHandle,
                                                                         ERRORINFO *errorInfo,
                                                                         const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchgetCurrentArtID (CAObjHandle objectHandle,
                                                                    ERRORINFO *errorInfo,
                                                                    VBOOL fLargeArt,
                                                                    long *pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchgetTimeString (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo,
                                                                  double dTime,
                                                                  char **pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchgetCurrentScriptCommand (CAObjHandle objectHandle,
                                                                            ERRORINFO *errorInfo,
                                                                            const char *bstrType,
                                                                            char **pbstrCommand);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchcalcLayout (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo,
                                                               long lWidth,
                                                               long lHeight,
                                                               VBOOL vbCaptions,
                                                               VBOOL vbBanner);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchgetLayoutSize (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo,
                                                                  long nProp,
                                                                  long *plValue);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchgetRootPlaylist (CAObjHandle objectHandle,
                                                                    ERRORINFO *errorInfo,
                                                                    CAObjHandle pPlaylist,
                                                                    CAObjHandle *ppRootPlaylist);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchgetHTMLViewURL (CAObjHandle objectHandle,
                                                                   ERRORINFO *errorInfo,
                                                                   char **pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchGeteditObj (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo,
                                                               LPUNKNOWN *ppVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchSeteditObj (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo,
                                                               LPUNKNOWN ppVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchgetStatusString (CAObjHandle objectHandle,
                                                                    ERRORINFO *errorInfo,
                                                                    const char *bstrStatusId,
                                                                    char **pbstrStatus);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchgetStatusPct (CAObjHandle objectHandle,
                                                                 ERRORINFO *errorInfo,
                                                                 const char *bstrStatusId,
                                                                 long *pvResult);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchgetStatusResult (CAObjHandle objectHandle,
                                                                    ERRORINFO *errorInfo,
                                                                    const char *bstrStatusId,
                                                                    long *pvResult);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchgetStatusIcon (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo,
                                                                  const char *bstrStatusId,
                                                                  long *pvResult);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchgetStatusIdList (CAObjHandle objectHandle,
                                                                    ERRORINFO *errorInfo,
                                                                    char **pbstrStatus);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchGetnotificationString (CAObjHandle objectHandle,
                                                                          ERRORINFO *errorInfo,
                                                                          char **pbstrNotificationString);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchGethtmlViewBaseURL (CAObjHandle objectHandle,
                                                                       ERRORINFO *errorInfo,
                                                                       char **pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchSethtmlViewBaseURL (CAObjHandle objectHandle,
                                                                       ERRORINFO *errorInfo,
                                                                       const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchGethtmlViewFullURL (CAObjHandle objectHandle,
                                                                       ERRORINFO *errorInfo,
                                                                       char **pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchSethtmlViewFullURL (CAObjHandle objectHandle,
                                                                       ERRORINFO *errorInfo,
                                                                       const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchGethtmlViewSecureLock (CAObjHandle objectHandle,
                                                                          ERRORINFO *errorInfo,
                                                                          long *pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchSethtmlViewSecureLock (CAObjHandle objectHandle,
                                                                          ERRORINFO *errorInfo,
                                                                          long pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchGethtmlViewBusy (CAObjHandle objectHandle,
                                                                    ERRORINFO *errorInfo,
                                                                    VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchSethtmlViewBusy (CAObjHandle objectHandle,
                                                                    ERRORINFO *errorInfo,
                                                                    VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchGethtmlViewShowCert (CAObjHandle objectHandle,
                                                                        ERRORINFO *errorInfo,
                                                                        VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchSethtmlViewShowCert (CAObjHandle objectHandle,
                                                                        ERRORINFO *errorInfo,
                                                                        VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchGetpreviousEnabled (CAObjHandle objectHandle,
                                                                       ERRORINFO *errorInfo,
                                                                       VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchSetpreviousEnabled (CAObjHandle objectHandle,
                                                                       ERRORINFO *errorInfo,
                                                                       VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchGetdoPreviousNow (CAObjHandle objectHandle,
                                                                     ERRORINFO *errorInfo,
                                                                     VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchSetdoPreviousNow (CAObjHandle objectHandle,
                                                                     ERRORINFO *errorInfo,
                                                                     VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchGetDPI (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           long *pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchclearColors (CAObjHandle objectHandle,
                                                                ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchGetlastMessage (CAObjHandle objectHandle,
                                                                   ERRORINFO *errorInfo,
                                                                   char **pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchSetlastMessage (CAObjHandle objectHandle,
                                                                   ERRORINFO *errorInfo,
                                                                   const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchGetinVistaPlus (CAObjHandle objectHandle,
                                                                   ERRORINFO *errorInfo,
                                                                   VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchGetisBidi (CAObjHandle objectHandle,
                                                              ERRORINFO *errorInfo,
                                                              VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchGetisOCX (CAObjHandle objectHandle,
                                                             ERRORINFO *errorInfo,
                                                             VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchGethoverTransportsEnabled (CAObjHandle objectHandle,
                                                                              ERRORINFO *errorInfo,
                                                                              VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchinitRipHelper (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchGetisAudioCD (CAObjHandle objectHandle,
                                                                 ERRORINFO *errorInfo,
                                                                 VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchSetisAudioCD (CAObjHandle objectHandle,
                                                                 ERRORINFO *errorInfo,
                                                                 VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchGetcanRip (CAObjHandle objectHandle,
                                                              ERRORINFO *errorInfo,
                                                              VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchSetcanRip (CAObjHandle objectHandle,
                                                              ERRORINFO *errorInfo,
                                                              VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchGetisRipping (CAObjHandle objectHandle,
                                                                 ERRORINFO *errorInfo,
                                                                 VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchSetisRipping (CAObjHandle objectHandle,
                                                                 ERRORINFO *errorInfo,
                                                                 VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchGetcurrentDrive (CAObjHandle objectHandle,
                                                                    ERRORINFO *errorInfo,
                                                                    char **pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchSetcurrentDrive (CAObjHandle objectHandle,
                                                                    ERRORINFO *errorInfo,
                                                                    const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchstartRip (CAObjHandle objectHandle,
                                                             ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchstopRip (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchGetshowMMO (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo,
                                                               VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchSetshowMMO (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo,
                                                               VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchGetMMOVisible (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo,
                                                                  VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchGetsuggestionsVisible (CAObjHandle objectHandle,
                                                                          ERRORINFO *errorInfo,
                                                                          VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchGetsuggestionsTextColor (CAObjHandle objectHandle,
                                                                            ERRORINFO *errorInfo,
                                                                            char **pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchGetfontFace (CAObjHandle objectHandle,
                                                                ERRORINFO *errorInfo,
                                                                char **pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchGetfontSize (CAObjHandle objectHandle,
                                                                ERRORINFO *errorInfo,
                                                                long *pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchGetbackgroundColor (CAObjHandle objectHandle,
                                                                       ERRORINFO *errorInfo,
                                                                       char **pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchGetdoubleClickTime (CAObjHandle objectHandle,
                                                                       ERRORINFO *errorInfo,
                                                                       long *pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchGetplayAgain (CAObjHandle objectHandle,
                                                                 ERRORINFO *errorInfo,
                                                                 VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchGetpreviousPlaylistAvailable (CAObjHandle objectHandle,
                                                                                 ERRORINFO *errorInfo,
                                                                                 VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchGetnextPlaylistAvailable (CAObjHandle objectHandle,
                                                                             ERRORINFO *errorInfo,
                                                                             VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchnextPlaylist (CAObjHandle objectHandle,
                                                                 ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchpreviousPlaylist (CAObjHandle objectHandle,
                                                                     ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchplayOffsetMedia (CAObjHandle objectHandle,
                                                                    ERRORINFO *errorInfo,
                                                                    long iOffset);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchGetbasketVisible (CAObjHandle objectHandle,
                                                                     ERRORINFO *errorInfo,
                                                                     VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchSetbasketVisible (CAObjHandle objectHandle,
                                                                     ERRORINFO *errorInfo,
                                                                     VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchGetmmoTextColor (CAObjHandle objectHandle,
                                                                    ERRORINFO *errorInfo,
                                                                    char **pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchGetbackgroundVisible (CAObjHandle objectHandle,
                                                                         ERRORINFO *errorInfo,
                                                                         VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchSetbackgroundEnabled (CAObjHandle objectHandle,
                                                                         ERRORINFO *errorInfo,
                                                                         VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchGetbackgroundEnabled (CAObjHandle objectHandle,
                                                                         ERRORINFO *errorInfo,
                                                                         VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchSetbackgroundIndex (CAObjHandle objectHandle,
                                                                       ERRORINFO *errorInfo,
                                                                       long pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchGetbackgroundIndex (CAObjHandle objectHandle,
                                                                       ERRORINFO *errorInfo,
                                                                       long *pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchGetupNext (CAObjHandle objectHandle,
                                                              ERRORINFO *errorInfo,
                                                              char **pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchGetplaybackOverlayVisible (CAObjHandle objectHandle,
                                                                              ERRORINFO *errorInfo,
                                                                              VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchGetremoted (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo,
                                                               VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchGetglassEnabled (CAObjHandle objectHandle,
                                                                    ERRORINFO *errorInfo,
                                                                    VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchGethighContrast (CAObjHandle objectHandle,
                                                                    ERRORINFO *errorInfo,
                                                                    VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchSettestHighContrast (CAObjHandle objectHandle,
                                                                        ERRORINFO *errorInfo,
                                                                        const char *newValue);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchGetsessionPlaylistCount (CAObjHandle objectHandle,
                                                                            ERRORINFO *errorInfo,
                                                                            long *pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchsetGestureStatus (CAObjHandle objectHandle,
                                                                     ERRORINFO *errorInfo,
                                                                     CAObjHandle pObject,
                                                                     long newVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchGetmetadataString (CAObjHandle objectHandle,
                                                                      ERRORINFO *errorInfo,
                                                                      char **pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchSetmetadataString (CAObjHandle objectHandle,
                                                                      ERRORINFO *errorInfo,
                                                                      const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchGetalbumArtAlpha (CAObjHandle objectHandle,
                                                                     ERRORINFO *errorInfo,
                                                                     long *pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchGetplayerModeAlbumArtSelected (CAObjHandle objectHandle,
                                                                                  ERRORINFO *errorInfo,
                                                                                  VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchGetinFullScreen (CAObjHandle objectHandle,
                                                                    ERRORINFO *errorInfo,
                                                                    VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchsyncToAlbumArt (CAObjHandle objectHandle,
                                                                   ERRORINFO *errorInfo,
                                                                   CAObjHandle pObject,
                                                                   long iOffsetFromCurrentMedia,
                                                                   const char *bstrFallbackImage);

HRESULT CVIFUNC WMPLib_IWMPNowPlayingHelperDispatchGetresourceIdForDpi (CAObjHandle objectHandle,
                                                                        ERRORINFO *errorInfo,
                                                                        long iResourceId,
                                                                        long *pVal);

HRESULT CVIFUNC WMPLib_IWMPNowDoingDispatchhideBasket (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPNowDoingDispatchburnNavigateToStatus (CAObjHandle objectHandle,
                                                                 ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPNowDoingDispatchsyncNavigateToStatus (CAObjHandle objectHandle,
                                                                 ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPNowDoingDispatchGetDPI (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   long *pVal);

HRESULT CVIFUNC WMPLib_IWMPNowDoingDispatchGetmode (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    char **pVal);

HRESULT CVIFUNC WMPLib_IWMPNowDoingDispatchSetburn_selectedDrive (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo,
                                                                  long pVal);

HRESULT CVIFUNC WMPLib_IWMPNowDoingDispatchGetburn_selectedDrive (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo,
                                                                  long *pVal);

HRESULT CVIFUNC WMPLib_IWMPNowDoingDispatchGetsync_selectedDevice (CAObjHandle objectHandle,
                                                                   ERRORINFO *errorInfo,
                                                                   long *pVal);

HRESULT CVIFUNC WMPLib_IWMPNowDoingDispatchSetsync_selectedDevice (CAObjHandle objectHandle,
                                                                   ERRORINFO *errorInfo,
                                                                   long pVal);

HRESULT CVIFUNC WMPLib_IWMPNowDoingDispatchGetburn_numDiscsSpanned (CAObjHandle objectHandle,
                                                                    ERRORINFO *errorInfo,
                                                                    long *pVal);

HRESULT CVIFUNC WMPLib_IWMPNowDoingDispatchGeteditPlaylist (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo,
                                                            CAObjHandle *ppEditPlaylist);

HRESULT CVIFUNC WMPLib_IWMPNowDoingDispatchGetbasketPlaylistName (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo,
                                                                  char **pVal);

HRESULT CVIFUNC WMPLib_IWMPNowDoingDispatchGetisHighContrastMode (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo,
                                                                  VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPNowDoingDispatchGetallowRating (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IWMPNowDoingDispatchGetburn_mediaType (CAObjHandle objectHandle,
                                                              ERRORINFO *errorInfo,
                                                              char **pVal);

HRESULT CVIFUNC WMPLib_IWMPNowDoingDispatchGetburn_contentType (CAObjHandle objectHandle,
                                                                ERRORINFO *errorInfo,
                                                                char **pVal);

HRESULT CVIFUNC WMPLib_IWMPNowDoingDispatchGetburn_freeSpace (CAObjHandle objectHandle,
                                                              ERRORINFO *errorInfo,
                                                              long *pVal);

HRESULT CVIFUNC WMPLib_IWMPNowDoingDispatchGetburn_totalSpace (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo,
                                                               long *pVal);

HRESULT CVIFUNC WMPLib_IWMPNowDoingDispatchGetburn_driveName (CAObjHandle objectHandle,
                                                              ERRORINFO *errorInfo,
                                                              char **pVal);

HRESULT CVIFUNC WMPLib_IWMPNowDoingDispatchGetburn_numDevices (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo,
                                                               long *pVal);

HRESULT CVIFUNC WMPLib_IWMPNowDoingDispatchGetburn_spaceToUse (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo,
                                                               long *pVal);

HRESULT CVIFUNC WMPLib_IWMPNowDoingDispatchGetburn_percentComplete (CAObjHandle objectHandle,
                                                                    ERRORINFO *errorInfo,
                                                                    long *pVal);

HRESULT CVIFUNC WMPLib_IWMPNowDoingDispatchGetsync_spaceToUse (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo,
                                                               long *pVal);

HRESULT CVIFUNC WMPLib_IWMPNowDoingDispatchGetsync_spaceUsed (CAObjHandle objectHandle,
                                                              ERRORINFO *errorInfo,
                                                              long *pVal);

HRESULT CVIFUNC WMPLib_IWMPNowDoingDispatchGetsync_totalSpace (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo,
                                                               long *pVal);

HRESULT CVIFUNC WMPLib_IWMPNowDoingDispatchGetsync_deviceName (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo,
                                                               char **pVal);

HRESULT CVIFUNC WMPLib_IWMPNowDoingDispatchGetsync_numDevices (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo,
                                                               long *pVal);

HRESULT CVIFUNC WMPLib_IWMPNowDoingDispatchGetsync_oemName (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo,
                                                            char **pVal);

HRESULT CVIFUNC WMPLib_IWMPNowDoingDispatchGetsync_percentComplete (CAObjHandle objectHandle,
                                                                    ERRORINFO *errorInfo,
                                                                    long *pVal);

HRESULT CVIFUNC WMPLib_IWMPNowDoingDispatchlogData (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    const char *ID,
                                                    const char *data);

HRESULT CVIFUNC WMPLib_IWMPNowDoingDispatchformatTime (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       long value,
                                                       char **pbstrReturn);

HRESULT CVIFUNC WMPLib_IWMPHoverPreviewDispatchGettitle (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         char **pVal);

HRESULT CVIFUNC WMPLib_IWMPHoverPreviewDispatchGetalbum (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         char **pVal);

HRESULT CVIFUNC WMPLib_IWMPHoverPreviewDispatchGetURL (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       char **pVal);

HRESULT CVIFUNC WMPLib_IWMPHoverPreviewDispatchSetimage (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         CAObjHandle newValue);

HRESULT CVIFUNC WMPLib_IWMPHoverPreviewDispatchSetautoClick (CAObjHandle objectHandle,
                                                             ERRORINFO *errorInfo,
                                                             VBOOL newValue);

HRESULT CVIFUNC WMPLib_IWMPHoverPreviewDispatchSetpreviewClick (CAObjHandle objectHandle,
                                                                ERRORINFO *errorInfo,
                                                                VBOOL newValue);

HRESULT CVIFUNC WMPLib_IWMPHoverPreviewDispatchdismiss (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPListBoxItemSetvalue (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                const char *newValue);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlColumnGetcolumnName (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo,
                                                            char **pVal);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlColumnSetcolumnName (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo,
                                                            const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlColumnGetcolumnID (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          char **pVal);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlColumnSetcolumnID (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlColumnGetcolumnResizeMode (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo,
                                                                  char **pVal);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlColumnSetcolumnResizeMode (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo,
                                                                  const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlColumnGetcolumnWidth (CAObjHandle objectHandle,
                                                             ERRORINFO *errorInfo,
                                                             long *pVal);

HRESULT CVIFUNC WMPLib_IWMPPlaylistCtrlColumnSetcolumnWidth (CAObjHandle objectHandle,
                                                             ERRORINFO *errorInfo,
                                                             long pVal);

HRESULT CVIFUNC WMPLib_IWMPPluginUIHostGetbackgroundColor (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           char **pVal);

HRESULT CVIFUNC WMPLib_IWMPPluginUIHostSetbackgroundColor (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPPluginUIHostGetobjectID (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    char **pVal);

HRESULT CVIFUNC WMPLib_IWMPPluginUIHostSetobjectID (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    const char *pVal);

HRESULT CVIFUNC WMPLib_IWMPPluginUIHostgetProperty (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    const char *bstrName,
                                                    VARIANT *pVal);

HRESULT CVIFUNC WMPLib_IWMPPluginUIHostsetProperty (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    const char *bstrName,
                                                    VARIANT newVal);

HRESULT CVIFUNC WMPLib_ITaskCntrCtrlGetCurrentContainer (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         LPUNKNOWN *ppUnk);

HRESULT CVIFUNC WMPLib_ITaskCntrCtrlSetCurrentContainer (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         LPUNKNOWN ppUnk);

HRESULT CVIFUNC WMPLib_ITaskCntrCtrlActivate (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPGraphEventHandlerNotifyGraphStateChange (CAObjHandle objectHandle,
                                                                    ERRORINFO *errorInfo,
                                                                    WMPLibType_ULONG_PTR punkGraph,
                                                                    long lGraphState);

HRESULT CVIFUNC WMPLib_IWMPGraphEventHandlerAsyncNotifyGraphStateChange (CAObjHandle objectHandle,
                                                                         ERRORINFO *errorInfo,
                                                                         WMPLibType_ULONG_PTR punkGraph,
                                                                         long lGraphState);

HRESULT CVIFUNC WMPLib_IWMPGraphEventHandlerNotifyRateChange (CAObjHandle objectHandle,
                                                              ERRORINFO *errorInfo,
                                                              WMPLibType_ULONG_PTR punkGraph,
                                                              double dRate);

HRESULT CVIFUNC WMPLib_IWMPGraphEventHandlerNotifyPlaybackEnd (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo,
                                                               WMPLibType_ULONG_PTR punkGraph,
                                                               const char *bstrQueuedUrl,
                                                               WMPLibType_ULONG_PTR dwCurrentContext);

HRESULT CVIFUNC WMPLib_IWMPGraphEventHandlerNotifyStreamEnd (CAObjHandle objectHandle,
                                                             ERRORINFO *errorInfo,
                                                             WMPLibType_ULONG_PTR punkGraph);

HRESULT CVIFUNC WMPLib_IWMPGraphEventHandlerNotifyScriptCommand (CAObjHandle objectHandle,
                                                                 ERRORINFO *errorInfo,
                                                                 WMPLibType_ULONG_PTR punkGraph,
                                                                 const char *bstrCommand,
                                                                 const char *bstrParam);

HRESULT CVIFUNC WMPLib_IWMPGraphEventHandlerNotifyEarlyScriptCommand (CAObjHandle objectHandle,
                                                                      ERRORINFO *errorInfo,
                                                                      WMPLibType_ULONG_PTR punkGraph,
                                                                      const char *bstrCommand,
                                                                      const char *bstrParam,
                                                                      double dTime);

HRESULT CVIFUNC WMPLib_IWMPGraphEventHandlerNotifyMarkerHit (CAObjHandle objectHandle,
                                                             ERRORINFO *errorInfo,
                                                             WMPLibType_ULONG_PTR punkGraph,
                                                             long lMarker);

HRESULT CVIFUNC WMPLib_IWMPGraphEventHandlerNotifyGraphError (CAObjHandle objectHandle,
                                                              ERRORINFO *errorInfo,
                                                              WMPLibType_ULONG_PTR punkGraph,
                                                              long lErrMajor,
                                                              long lErrMinor,
                                                              long lCondition,
                                                              const char *bstrInfo,
                                                              LPUNKNOWN punkGraphData);

HRESULT CVIFUNC WMPLib_IWMPGraphEventHandlerNotifyAcquireCredentials (CAObjHandle objectHandle,
                                                                      ERRORINFO *errorInfo,
                                                                      WMPLibType_ULONG_PTR punkGraph,
                                                                      const char *bstrRealm,
                                                                      const char *bstrSite,
                                                                      char **bstrUser,
                                                                      char **bstrPassword,
                                                                      unsigned long *pdwFlags,
                                                                      VBOOL *pfCancel);

HRESULT CVIFUNC WMPLib_IWMPGraphEventHandlerNotifyUntrustedLicense (CAObjHandle objectHandle,
                                                                    ERRORINFO *errorInfo,
                                                                    WMPLibType_ULONG_PTR punkGraph,
                                                                    const char *bstrURL,
                                                                    VBOOL *pfCancel);

HRESULT CVIFUNC WMPLib_IWMPGraphEventHandlerNotifyLicenseDialog (CAObjHandle objectHandle,
                                                                 ERRORINFO *errorInfo,
                                                                 WMPLibType_ULONG_PTR punkGraph,
                                                                 const char *bstrURL,
                                                                 const char *bstrContent,
                                                                 unsigned char *pPostData,
                                                                 unsigned long dwPostDataSize,
                                                                 long lResult);

HRESULT CVIFUNC WMPLib_IWMPGraphEventHandlerNotifyNeedsIndividualization (CAObjHandle objectHandle,
                                                                          ERRORINFO *errorInfo,
                                                                          WMPLibType_ULONG_PTR punkGraph,
                                                                          VBOOL *pfResult);

HRESULT CVIFUNC WMPLib_IWMPGraphEventHandlerNotifyNewMetadata (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo,
                                                               WMPLibType_ULONG_PTR punkGraph);

HRESULT CVIFUNC WMPLib_IWMPGraphEventHandlerNotifyNewMediaCaps (CAObjHandle objectHandle,
                                                                ERRORINFO *errorInfo,
                                                                WMPLibType_ULONG_PTR punkGraph);

HRESULT CVIFUNC WMPLib_IWMPGraphEventHandlerNotifyDisconnect (CAObjHandle objectHandle,
                                                              ERRORINFO *errorInfo,
                                                              WMPLibType_ULONG_PTR punkGraph,
                                                              long lResult);

HRESULT CVIFUNC WMPLib_IWMPGraphEventHandlerNotifySave (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        WMPLibType_ULONG_PTR punkGraph,
                                                        long fStarted,
                                                        long lResult);

HRESULT CVIFUNC WMPLib_IWMPGraphEventHandlerNotifyDelayClose (CAObjHandle objectHandle,
                                                              ERRORINFO *errorInfo,
                                                              WMPLibType_ULONG_PTR punkGraph,
                                                              VBOOL fDelay);

HRESULT CVIFUNC WMPLib_IWMPGraphEventHandlerNotifyDVD (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       WMPLibType_ULONG_PTR punkGraph,
                                                       long lEventCode,
                                                       long lParam1,
                                                       long lParam2);

HRESULT CVIFUNC WMPLib_IWMPGraphEventHandlerNotifyRequestAppThreadAction (CAObjHandle objectHandle,
                                                                          ERRORINFO *errorInfo,
                                                                          WMPLibType_ULONG_PTR punkGraph,
                                                                          unsigned long dwAction);

HRESULT CVIFUNC WMPLib_IWMPGraphEventHandlerNotifyPrerollReady (CAObjHandle objectHandle,
                                                                ERRORINFO *errorInfo,
                                                                WMPLibType_ULONG_PTR punkGraph);

HRESULT CVIFUNC WMPLib_IWMPGraphEventHandlerNotifyNewIcons (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo,
                                                            WMPLibType_ULONG_PTR punkGraph);

HRESULT CVIFUNC WMPLib_IWMPGraphEventHandlerNotifyStepComplete (CAObjHandle objectHandle,
                                                                ERRORINFO *errorInfo,
                                                                WMPLibType_ULONG_PTR punkGraph);

HRESULT CVIFUNC WMPLib_IWMPGraphEventHandlerNotifyNewBitrate (CAObjHandle objectHandle,
                                                              ERRORINFO *errorInfo,
                                                              WMPLibType_ULONG_PTR punkGraph,
                                                              unsigned long dwBitrate);

HRESULT CVIFUNC WMPLib_IWMPGraphEventHandlerNotifyGraphCreationPreRender (CAObjHandle objectHandle,
                                                                          ERRORINFO *errorInfo,
                                                                          WMPLibType_ULONG_PTR punkGraph,
                                                                          WMPLibType_ULONG_PTR punkFilterGraph,
                                                                          WMPLibType_ULONG_PTR punkCardeaEncConfig,
                                                                          WMPLibType_ULONG_PTR phrContinue,
                                                                          WMPLibType_ULONG_PTR hEventToSet);

HRESULT CVIFUNC WMPLib_IWMPGraphEventHandlerNotifyGraphCreationPostRender (CAObjHandle objectHandle,
                                                                           ERRORINFO *errorInfo,
                                                                           WMPLibType_ULONG_PTR punkGraph,
                                                                           WMPLibType_ULONG_PTR punkFilterGraph,
                                                                           WMPLibType_ULONG_PTR phrContinue,
                                                                           WMPLibType_ULONG_PTR hEventToSet);

HRESULT CVIFUNC WMPLib_IWMPGraphEventHandlerNotifyGraphUserEvent (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo,
                                                                  WMPLibType_ULONG_PTR punkGraph,
                                                                  long eventCode);

HRESULT CVIFUNC WMPLib_IWMPGraphEventHandlerNotifyRevocation (CAObjHandle objectHandle,
                                                              ERRORINFO *errorInfo,
                                                              WMPLibType_ULONG_PTR punkGraph,
                                                              VBOOL *pfResult);

HRESULT CVIFUNC WMPLib_IWMPGraphEventHandlerNotifyNeedsWMGraphIndividualization (CAObjHandle objectHandle,
                                                                                 ERRORINFO *errorInfo,
                                                                                 WMPLibType_ULONG_PTR punkGraph,
                                                                                 WMPLibType_ULONG_PTR phWnd,
                                                                                 WMPLibType_ULONG_PTR hIndivEvent,
                                                                                 VBOOL *pfCancel,
                                                                                 VBOOL *pfResult);

HRESULT CVIFUNC WMPLib_IWMPGraphEventHandlerNotifyNeedsFullscreen (CAObjHandle objectHandle,
                                                                   ERRORINFO *errorInfo,
                                                                   WMPLibType_ULONG_PTR punkGraph);

HRESULT CVIFUNC WMPLib_IBatteryGetpresetCount (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo, long *pVal);

HRESULT CVIFUNC WMPLib_IBatteryGetpreset (CAObjHandle objectHandle,
                                          ERRORINFO *errorInfo, long nIndex,
                                          CAObjHandle *ppDispatch);

HRESULT CVIFUNC WMPLib_IBatteryPresetGettitle (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo, char **pVal);

HRESULT CVIFUNC WMPLib_IBatteryPresetSettitle (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo,
                                               const char *pVal);

HRESULT CVIFUNC WMPLib_IBatteryRandomPresetGettitle (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     char **pVal);

HRESULT CVIFUNC WMPLib_IBatteryRandomPresetSettitle (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     const char *pVal);

HRESULT CVIFUNC WMPLib_IBatterySavedPresetGettitle (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    char **pVal);

HRESULT CVIFUNC WMPLib_IBatterySavedPresetSettitle (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    const char *pVal);

HRESULT CVIFUNC WMPLib_IBarsEffectGetdisplayMode (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  long *pVal);

HRESULT CVIFUNC WMPLib_IBarsEffectSetdisplayMode (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  long pVal);

HRESULT CVIFUNC WMPLib_IBarsEffectGetshowPeaks (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IBarsEffectSetshowPeaks (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo, VBOOL pVal);

HRESULT CVIFUNC WMPLib_IBarsEffectGetpeakHangTime (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   long *pVal);

HRESULT CVIFUNC WMPLib_IBarsEffectSetpeakHangTime (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   long pVal);

HRESULT CVIFUNC WMPLib_IBarsEffectGetpeakFallbackAcceleration (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo,
                                                               float *pVal);

HRESULT CVIFUNC WMPLib_IBarsEffectSetpeakFallbackAcceleration (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo,
                                                               float pVal);

HRESULT CVIFUNC WMPLib_IBarsEffectGetpeakFallbackSpeed (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        float *pVal);

HRESULT CVIFUNC WMPLib_IBarsEffectSetpeakFallbackSpeed (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        float pVal);

HRESULT CVIFUNC WMPLib_IBarsEffectGetlevelFallbackAcceleration (CAObjHandle objectHandle,
                                                                ERRORINFO *errorInfo,
                                                                float *pVal);

HRESULT CVIFUNC WMPLib_IBarsEffectSetlevelFallbackAcceleration (CAObjHandle objectHandle,
                                                                ERRORINFO *errorInfo,
                                                                float pVal);

HRESULT CVIFUNC WMPLib_IBarsEffectGetlevelFallbackSpeed (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         float *pVal);

HRESULT CVIFUNC WMPLib_IBarsEffectSetlevelFallbackSpeed (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         float pVal);

HRESULT CVIFUNC WMPLib_IBarsEffectGetbackgroundColor (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      char **pVal);

HRESULT CVIFUNC WMPLib_IBarsEffectSetbackgroundColor (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      const char *pVal);

HRESULT CVIFUNC WMPLib_IBarsEffectGetlevelColor (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 char **pVal);

HRESULT CVIFUNC WMPLib_IBarsEffectSetlevelColor (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 const char *pVal);

HRESULT CVIFUNC WMPLib_IBarsEffectGetpeakColor (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                char **pVal);

HRESULT CVIFUNC WMPLib_IBarsEffectSetpeakColor (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                const char *pVal);

HRESULT CVIFUNC WMPLib_IBarsEffectGethorizontalSpacing (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        long *pVal);

HRESULT CVIFUNC WMPLib_IBarsEffectSethorizontalSpacing (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        long pVal);

HRESULT CVIFUNC WMPLib_IBarsEffectGetlevelWidth (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 long *pVal);

HRESULT CVIFUNC WMPLib_IBarsEffectSetlevelWidth (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo, long pVal);

HRESULT CVIFUNC WMPLib_IBarsEffectGetlevelScale (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 float *pVal);

HRESULT CVIFUNC WMPLib_IBarsEffectSetlevelScale (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 float pVal);

HRESULT CVIFUNC WMPLib_IBarsEffectGetfadeRate (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo, long *pVal);

HRESULT CVIFUNC WMPLib_IBarsEffectSetfadeRate (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo, long pVal);

HRESULT CVIFUNC WMPLib_IBarsEffectGetfadeMode (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo, long *pVal);

HRESULT CVIFUNC WMPLib_IBarsEffectSetfadeMode (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo, long pVal);

HRESULT CVIFUNC WMPLib_IBarsEffectGettransparent (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  VBOOL *pVal);

HRESULT CVIFUNC WMPLib_IBarsEffectSettransparent (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  VBOOL pVal);

HRESULT CVIFUNC WMPLib_IWMPExternalGetversion (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo,
                                               char **pBSTR);

HRESULT CVIFUNC WMPLib_IWMPExternalGetappColorLight (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     char **pbstrColor);

HRESULT CVIFUNC WMPLib_IWMPExternalSetOnColorChange (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     CAObjHandle newValue);

HRESULT CVIFUNC WMPLib_IWMPExternalColorsGetversion (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     char **pBSTR);

HRESULT CVIFUNC WMPLib_IWMPExternalColorsGetappColorLight (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           char **pbstrColor);

HRESULT CVIFUNC WMPLib_IWMPExternalColorsSetOnColorChange (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           CAObjHandle newValue);

HRESULT CVIFUNC WMPLib_IWMPExternalColorsGetappColorMedium (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo,
                                                            char **pbstrColor);

HRESULT CVIFUNC WMPLib_IWMPExternalColorsGetappColorDark (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          char **pbstrColor);

HRESULT CVIFUNC WMPLib_IWMPExternalColorsGetappColorButtonHighlight (CAObjHandle objectHandle,
                                                                     ERRORINFO *errorInfo,
                                                                     char **pbstrColor);

HRESULT CVIFUNC WMPLib_IWMPExternalColorsGetappColorButtonShadow (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo,
                                                                  char **pbstrColor);

HRESULT CVIFUNC WMPLib_IWMPExternalColorsGetappColorButtonHoverFace (CAObjHandle objectHandle,
                                                                     ERRORINFO *errorInfo,
                                                                     char **pbstrColor);

HRESULT CVIFUNC WMPLib_IWMPSubscriptionServiceLimitedGetversion (CAObjHandle objectHandle,
                                                                 ERRORINFO *errorInfo,
                                                                 char **pBSTR);

HRESULT CVIFUNC WMPLib_IWMPSubscriptionServiceLimitedGetappColorLight (CAObjHandle objectHandle,
                                                                       ERRORINFO *errorInfo,
                                                                       char **pbstrColor);

HRESULT CVIFUNC WMPLib_IWMPSubscriptionServiceLimitedSetOnColorChange (CAObjHandle objectHandle,
                                                                       ERRORINFO *errorInfo,
                                                                       CAObjHandle newValue);

HRESULT CVIFUNC WMPLib_IWMPSubscriptionServiceLimitedGetappColorMedium (CAObjHandle objectHandle,
                                                                        ERRORINFO *errorInfo,
                                                                        char **pbstrColor);

HRESULT CVIFUNC WMPLib_IWMPSubscriptionServiceLimitedGetappColorDark (CAObjHandle objectHandle,
                                                                      ERRORINFO *errorInfo,
                                                                      char **pbstrColor);

HRESULT CVIFUNC WMPLib_IWMPSubscriptionServiceLimitedGetappColorButtonHighlight (CAObjHandle objectHandle,
                                                                                 ERRORINFO *errorInfo,
                                                                                 char **pbstrColor);

HRESULT CVIFUNC WMPLib_IWMPSubscriptionServiceLimitedGetappColorButtonShadow (CAObjHandle objectHandle,
                                                                              ERRORINFO *errorInfo,
                                                                              char **pbstrColor);

HRESULT CVIFUNC WMPLib_IWMPSubscriptionServiceLimitedGetappColorButtonHoverFace (CAObjHandle objectHandle,
                                                                                 ERRORINFO *errorInfo,
                                                                                 char **pbstrColor);

HRESULT CVIFUNC WMPLib_IWMPSubscriptionServiceLimitedNavigateTaskPaneURL (CAObjHandle objectHandle,
                                                                          ERRORINFO *errorInfo,
                                                                          const char *bstrKeyName,
                                                                          const char *bstrTaskPane,
                                                                          const char *bstrParams);

HRESULT CVIFUNC WMPLib_IWMPSubscriptionServiceLimitedSetSelectedTaskPane (CAObjHandle objectHandle,
                                                                          ERRORINFO *errorInfo,
                                                                          const char *bstrTaskPane);

HRESULT CVIFUNC WMPLib_IWMPSubscriptionServiceLimitedGetSelectedTaskPane (CAObjHandle objectHandle,
                                                                          ERRORINFO *errorInfo,
                                                                          char **bstrTaskPane);

HRESULT CVIFUNC WMPLib_IWMPSubscriptionServiceExternalGetversion (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo,
                                                                  char **pBSTR);

HRESULT CVIFUNC WMPLib_IWMPSubscriptionServiceExternalGetappColorLight (CAObjHandle objectHandle,
                                                                        ERRORINFO *errorInfo,
                                                                        char **pbstrColor);

HRESULT CVIFUNC WMPLib_IWMPSubscriptionServiceExternalSetOnColorChange (CAObjHandle objectHandle,
                                                                        ERRORINFO *errorInfo,
                                                                        CAObjHandle newValue);

HRESULT CVIFUNC WMPLib_IWMPSubscriptionServiceExternalGetappColorMedium (CAObjHandle objectHandle,
                                                                         ERRORINFO *errorInfo,
                                                                         char **pbstrColor);

HRESULT CVIFUNC WMPLib_IWMPSubscriptionServiceExternalGetappColorDark (CAObjHandle objectHandle,
                                                                       ERRORINFO *errorInfo,
                                                                       char **pbstrColor);

HRESULT CVIFUNC WMPLib_IWMPSubscriptionServiceExternalGetappColorButtonHighlight (CAObjHandle objectHandle,
                                                                                  ERRORINFO *errorInfo,
                                                                                  char **pbstrColor);

HRESULT CVIFUNC WMPLib_IWMPSubscriptionServiceExternalGetappColorButtonShadow (CAObjHandle objectHandle,
                                                                               ERRORINFO *errorInfo,
                                                                               char **pbstrColor);

HRESULT CVIFUNC WMPLib_IWMPSubscriptionServiceExternalGetappColorButtonHoverFace (CAObjHandle objectHandle,
                                                                                  ERRORINFO *errorInfo,
                                                                                  char **pbstrColor);

HRESULT CVIFUNC WMPLib_IWMPSubscriptionServiceExternalNavigateTaskPaneURL (CAObjHandle objectHandle,
                                                                           ERRORINFO *errorInfo,
                                                                           const char *bstrKeyName,
                                                                           const char *bstrTaskPane,
                                                                           const char *bstrParams);

HRESULT CVIFUNC WMPLib_IWMPSubscriptionServiceExternalSetSelectedTaskPane (CAObjHandle objectHandle,
                                                                           ERRORINFO *errorInfo,
                                                                           const char *bstrTaskPane);

HRESULT CVIFUNC WMPLib_IWMPSubscriptionServiceExternalGetSelectedTaskPane (CAObjHandle objectHandle,
                                                                           ERRORINFO *errorInfo,
                                                                           char **bstrTaskPane);

HRESULT CVIFUNC WMPLib_IWMPSubscriptionServiceExternalGetDownloadManager (CAObjHandle objectHandle,
                                                                          ERRORINFO *errorInfo,
                                                                          WMPLibObj_IWMPDownloadManager *ppDownloadMgr);

HRESULT CVIFUNC WMPLib_IWMPDownloadManagergetDownloadCollection (CAObjHandle objectHandle,
                                                                 ERRORINFO *errorInfo,
                                                                 long lCollectionId,
                                                                 WMPLibObj_IWMPDownloadCollection *ppCollection);

HRESULT CVIFUNC WMPLib_IWMPDownloadManagercreateDownloadCollection (CAObjHandle objectHandle,
                                                                    ERRORINFO *errorInfo,
                                                                    WMPLibObj_IWMPDownloadCollection *ppCollection);

HRESULT CVIFUNC WMPLib_IWMPDownloadCollectionGetID (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    long *plId);

HRESULT CVIFUNC WMPLib_IWMPDownloadCollectionGetcount (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       long *plCount);

HRESULT CVIFUNC WMPLib_IWMPDownloadCollectionItem (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   long lItem,
                                                   WMPLibObj_IWMPDownloadItem2 *ppDownload);

HRESULT CVIFUNC WMPLib_IWMPDownloadCollectionstartDownload (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo,
                                                            const char *bstrSourceURL,
                                                            const char *bstrType,
                                                            WMPLibObj_IWMPDownloadItem2 *ppDownload);

HRESULT CVIFUNC WMPLib_IWMPDownloadCollectionremoveItem (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         long lItem);

HRESULT CVIFUNC WMPLib_IWMPDownloadCollectionclear (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPDownloadItem2GetsourceURL (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      char **pbstrURL);

HRESULT CVIFUNC WMPLib_IWMPDownloadItem2Getsize (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 long *plSize);

HRESULT CVIFUNC WMPLib_IWMPDownloadItem2Gettype (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 char **pbstrType);

HRESULT CVIFUNC WMPLib_IWMPDownloadItem2Getprogress (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     long *plProgress);

HRESULT CVIFUNC WMPLib_IWMPDownloadItem2GetdownloadState (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          enum WMPLibEnum_WMPSubscriptionDownloadState *pwmpsdls);

HRESULT CVIFUNC WMPLib_IWMPDownloadItem2pause (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPDownloadItem2resume (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPDownloadItem2cancel (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPDownloadItem2getItemInfo (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     const char *bstrItemName,
                                                     char **pbstrVal);

HRESULT CVIFUNC WMPLib_IWMPDownloadItemGetsourceURL (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     char **pbstrURL);

HRESULT CVIFUNC WMPLib_IWMPDownloadItemGetsize (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                long *plSize);

HRESULT CVIFUNC WMPLib_IWMPDownloadItemGettype (CAObjHandle objectHandle,
                                                ERRORINFO *errorInfo,
                                                char **pbstrType);

HRESULT CVIFUNC WMPLib_IWMPDownloadItemGetprogress (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    long *plProgress);

HRESULT CVIFUNC WMPLib_IWMPDownloadItemGetdownloadState (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         enum WMPLibEnum_WMPSubscriptionDownloadState *pwmpsdls);

HRESULT CVIFUNC WMPLib_IWMPDownloadItempause (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPDownloadItemresume (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPDownloadItemcancel (CAObjHandle objectHandle,
                                               ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPSubscriptionServicePlayMediaGetversion (CAObjHandle objectHandle,
                                                                   ERRORINFO *errorInfo,
                                                                   char **pBSTR);

HRESULT CVIFUNC WMPLib_IWMPSubscriptionServicePlayMediaGetappColorLight (CAObjHandle objectHandle,
                                                                         ERRORINFO *errorInfo,
                                                                         char **pbstrColor);

HRESULT CVIFUNC WMPLib_IWMPSubscriptionServicePlayMediaSetOnColorChange (CAObjHandle objectHandle,
                                                                         ERRORINFO *errorInfo,
                                                                         CAObjHandle newValue);

HRESULT CVIFUNC WMPLib_IWMPSubscriptionServicePlayMediaGetappColorMedium (CAObjHandle objectHandle,
                                                                          ERRORINFO *errorInfo,
                                                                          char **pbstrColor);

HRESULT CVIFUNC WMPLib_IWMPSubscriptionServicePlayMediaGetappColorDark (CAObjHandle objectHandle,
                                                                        ERRORINFO *errorInfo,
                                                                        char **pbstrColor);

HRESULT CVIFUNC WMPLib_IWMPSubscriptionServicePlayMediaGetappColorButtonHighlight (CAObjHandle objectHandle,
                                                                                   ERRORINFO *errorInfo,
                                                                                   char **pbstrColor);

HRESULT CVIFUNC WMPLib_IWMPSubscriptionServicePlayMediaGetappColorButtonShadow (CAObjHandle objectHandle,
                                                                                ERRORINFO *errorInfo,
                                                                                char **pbstrColor);

HRESULT CVIFUNC WMPLib_IWMPSubscriptionServicePlayMediaGetappColorButtonHoverFace (CAObjHandle objectHandle,
                                                                                   ERRORINFO *errorInfo,
                                                                                   char **pbstrColor);

HRESULT CVIFUNC WMPLib_IWMPSubscriptionServicePlayMediaNavigateTaskPaneURL (CAObjHandle objectHandle,
                                                                            ERRORINFO *errorInfo,
                                                                            const char *bstrKeyName,
                                                                            const char *bstrTaskPane,
                                                                            const char *bstrParams);

HRESULT CVIFUNC WMPLib_IWMPSubscriptionServicePlayMediaSetSelectedTaskPane (CAObjHandle objectHandle,
                                                                            ERRORINFO *errorInfo,
                                                                            const char *bstrTaskPane);

HRESULT CVIFUNC WMPLib_IWMPSubscriptionServicePlayMediaGetSelectedTaskPane (CAObjHandle objectHandle,
                                                                            ERRORINFO *errorInfo,
                                                                            char **bstrTaskPane);

HRESULT CVIFUNC WMPLib_IWMPSubscriptionServicePlayMediaplayMedia (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo,
                                                                  const char *bstrURL);

HRESULT CVIFUNC WMPLib_IWMPDiscoExternalGetversion (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    char **pBSTR);

HRESULT CVIFUNC WMPLib_IWMPDiscoExternalGetappColorLight (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          char **pbstrColor);

HRESULT CVIFUNC WMPLib_IWMPDiscoExternalSetOnColorChange (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          CAObjHandle newValue);

HRESULT CVIFUNC WMPLib_IWMPDiscoExternalGetappColorMedium (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           char **pbstrColor);

HRESULT CVIFUNC WMPLib_IWMPDiscoExternalGetappColorDark (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         char **pbstrColor);

HRESULT CVIFUNC WMPLib_IWMPDiscoExternalGetappColorButtonHighlight (CAObjHandle objectHandle,
                                                                    ERRORINFO *errorInfo,
                                                                    char **pbstrColor);

HRESULT CVIFUNC WMPLib_IWMPDiscoExternalGetappColorButtonShadow (CAObjHandle objectHandle,
                                                                 ERRORINFO *errorInfo,
                                                                 char **pbstrColor);

HRESULT CVIFUNC WMPLib_IWMPDiscoExternalGetappColorButtonHoverFace (CAObjHandle objectHandle,
                                                                    ERRORINFO *errorInfo,
                                                                    char **pbstrColor);

HRESULT CVIFUNC WMPLib_IWMPDiscoExternalNavigateTaskPaneURL (CAObjHandle objectHandle,
                                                             ERRORINFO *errorInfo,
                                                             const char *bstrKeyName,
                                                             const char *bstrTaskPane,
                                                             const char *bstrParams);

HRESULT CVIFUNC WMPLib_IWMPDiscoExternalSetSelectedTaskPane (CAObjHandle objectHandle,
                                                             ERRORINFO *errorInfo,
                                                             const char *bstrTaskPane);

HRESULT CVIFUNC WMPLib_IWMPDiscoExternalGetSelectedTaskPane (CAObjHandle objectHandle,
                                                             ERRORINFO *errorInfo,
                                                             char **bstrTaskPane);

HRESULT CVIFUNC WMPLib_IWMPDiscoExternalGetDownloadManager (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo,
                                                            WMPLibObj_IWMPDownloadManager *ppDownloadMgr);

HRESULT CVIFUNC WMPLib_IWMPDiscoExternalSetOnLoginChange (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          CAObjHandle newValue);

HRESULT CVIFUNC WMPLib_IWMPDiscoExternalGetuserLoggedIn (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         VBOOL *pvbLoggedIn);

HRESULT CVIFUNC WMPLib_IWMPDiscoExternalattemptLogin (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPDiscoExternalGetaccountType (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        char **pbstrAcctType);

HRESULT CVIFUNC WMPLib_IWMPDiscoExternalSetOnViewChange (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         CAObjHandle newValue);

HRESULT CVIFUNC WMPLib_IWMPDiscoExternalchangeView (CAObjHandle objectHandle,
                                                    ERRORINFO *errorInfo,
                                                    const char *bstrLibraryLocationType,
                                                    const char *bstrLibraryLocationID,
                                                    const char *bstrFilter,
                                                    const char *bstrViewParams);

HRESULT CVIFUNC WMPLib_IWMPDiscoExternalchangeViewOnlineList (CAObjHandle objectHandle,
                                                              ERRORINFO *errorInfo,
                                                              const char *bstrLibraryLocationType,
                                                              const char *bstrLibraryLocationID,
                                                              const char *bstrParams,
                                                              const char *bstrFriendlyName,
                                                              const char *bstrListType,
                                                              const char *bstrViewMode);

HRESULT CVIFUNC WMPLib_IWMPDiscoExternalGetlibraryLocationType (CAObjHandle objectHandle,
                                                                ERRORINFO *errorInfo,
                                                                char **pbstrLibraryLocationType);

HRESULT CVIFUNC WMPLib_IWMPDiscoExternalGetlibraryLocationID (CAObjHandle objectHandle,
                                                              ERRORINFO *errorInfo,
                                                              char **pbstrLibraryLocationID);

HRESULT CVIFUNC WMPLib_IWMPDiscoExternalGetselectedItemType (CAObjHandle objectHandle,
                                                             ERRORINFO *errorInfo,
                                                             char **pbstrSelectedItemType);

HRESULT CVIFUNC WMPLib_IWMPDiscoExternalGetselectedItemID (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           char **pbstrLibraryLocationID);

HRESULT CVIFUNC WMPLib_IWMPDiscoExternalGetfilter (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   char **pbstrFilter);

HRESULT CVIFUNC WMPLib_IWMPDiscoExternalGettask (CAObjHandle objectHandle,
                                                 ERRORINFO *errorInfo,
                                                 char **pbstrTask);

HRESULT CVIFUNC WMPLib_IWMPDiscoExternalGetviewParameters (CAObjHandle objectHandle,
                                                           ERRORINFO *errorInfo,
                                                           char **pbstrViewParameters);

HRESULT CVIFUNC WMPLib_IWMPDiscoExternalcancelNavigate (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPDiscoExternalshowPopup (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   long lPopupIndex,
                                                   const char *bstrParameters);

HRESULT CVIFUNC WMPLib_IWMPDiscoExternaladdToBasket (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     const char *bstrViewType,
                                                     const char *bstrViewIDs);

HRESULT CVIFUNC WMPLib_IWMPDiscoExternalGetbasketTitle (CAObjHandle objectHandle,
                                                        ERRORINFO *errorInfo,
                                                        char **bstrParams);

HRESULT CVIFUNC WMPLib_IWMPDiscoExternalplay (CAObjHandle objectHandle,
                                              ERRORINFO *errorInfo,
                                              const char *bstrLibraryLocationType,
                                              const char *bstrLibraryLocationIDs);

HRESULT CVIFUNC WMPLib_IWMPDiscoExternaldownload (CAObjHandle objectHandle,
                                                  ERRORINFO *errorInfo,
                                                  const char *bstrViewType,
                                                  const char *bstrViewIDs);

HRESULT CVIFUNC WMPLib_IWMPDiscoExternalbuy (CAObjHandle objectHandle,
                                             ERRORINFO *errorInfo,
                                             const char *bstrViewType,
                                             const char *bstrViewIDs);

HRESULT CVIFUNC WMPLib_IWMPDiscoExternalsaveCurrentViewToLibrary (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo,
                                                                  const char *bstrFriendlyListType,
                                                                  VBOOL fDynamic);

HRESULT CVIFUNC WMPLib_IWMPDiscoExternalauthenticate (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      long lAuthenticationIndex);

HRESULT CVIFUNC WMPLib_IWMPDiscoExternalsendMessage (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     const char *bstrMsg,
                                                     const char *bstrParam);

HRESULT CVIFUNC WMPLib_IWMPDiscoExternalSetOnSendMessageComplete (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo,
                                                                  CAObjHandle newValue);

HRESULT CVIFUNC WMPLib_IWMPDiscoExternalSetignoreIEHistory (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo,
                                                            VBOOL newValue);

HRESULT CVIFUNC WMPLib_IWMPDiscoExternalGetpluginRunning (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          VBOOL *pfPluginRunning);

HRESULT CVIFUNC WMPLib_IWMPDiscoExternalGettemplateBeingDisplayedInLocalLibrary (CAObjHandle objectHandle,
                                                                                 ERRORINFO *errorInfo,
                                                                                 VBOOL *pfTemplateDisplayed);

HRESULT CVIFUNC WMPLib_IWMPDiscoExternalSetOnChangeViewError (CAObjHandle objectHandle,
                                                              ERRORINFO *errorInfo,
                                                              CAObjHandle newValue);

HRESULT CVIFUNC WMPLib_IWMPDiscoExternalSetOnChangeViewOnlineListError (CAObjHandle objectHandle,
                                                                        ERRORINFO *errorInfo,
                                                                        CAObjHandle newValue);

HRESULT CVIFUNC WMPLib_IWMPCDDVDWizardExternalGetversion (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          char **pBSTR);

HRESULT CVIFUNC WMPLib_IWMPCDDVDWizardExternalGetappColorLight (CAObjHandle objectHandle,
                                                                ERRORINFO *errorInfo,
                                                                char **pbstrColor);

HRESULT CVIFUNC WMPLib_IWMPCDDVDWizardExternalSetOnColorChange (CAObjHandle objectHandle,
                                                                ERRORINFO *errorInfo,
                                                                CAObjHandle newValue);

HRESULT CVIFUNC WMPLib_IWMPCDDVDWizardExternalGetappColorMedium (CAObjHandle objectHandle,
                                                                 ERRORINFO *errorInfo,
                                                                 char **pbstrColor);

HRESULT CVIFUNC WMPLib_IWMPCDDVDWizardExternalGetappColorDark (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo,
                                                               char **pbstrColor);

HRESULT CVIFUNC WMPLib_IWMPCDDVDWizardExternalGetappColorButtonHighlight (CAObjHandle objectHandle,
                                                                          ERRORINFO *errorInfo,
                                                                          char **pbstrColor);

HRESULT CVIFUNC WMPLib_IWMPCDDVDWizardExternalGetappColorButtonShadow (CAObjHandle objectHandle,
                                                                       ERRORINFO *errorInfo,
                                                                       char **pbstrColor);

HRESULT CVIFUNC WMPLib_IWMPCDDVDWizardExternalGetappColorButtonHoverFace (CAObjHandle objectHandle,
                                                                          ERRORINFO *errorInfo,
                                                                          char **pbstrColor);

HRESULT CVIFUNC WMPLib_IWMPCDDVDWizardExternalWriteNames (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          const char *bstrTOC,
                                                          const char *bstrMetadata);

HRESULT CVIFUNC WMPLib_IWMPCDDVDWizardExternalReturnToMainTask (CAObjHandle objectHandle,
                                                                ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPCDDVDWizardExternalWriteNamesEx (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo,
                                                            enum WMPLibEnum_WMP_WRITENAMESEX_TYPE type,
                                                            const char *bstrTypeId,
                                                            const char *bstrMetadata,
                                                            VBOOL fRenameRegroupFiles);

HRESULT CVIFUNC WMPLib_IWMPCDDVDWizardExternalGetMDQByRequestID (CAObjHandle objectHandle,
                                                                 ERRORINFO *errorInfo,
                                                                 const char *bstrRequestID,
                                                                 char **pbstrMDQ);

HRESULT CVIFUNC WMPLib_IWMPCDDVDWizardExternalEditMetadata (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPCDDVDWizardExternalIsMetadataAvailableForEdit (CAObjHandle objectHandle,
                                                                          ERRORINFO *errorInfo,
                                                                          VBOOL *pbIsAvailable);

HRESULT CVIFUNC WMPLib_IWMPCDDVDWizardExternalBuyCD (CAObjHandle objectHandle,
                                                     ERRORINFO *errorInfo,
                                                     const char *bstrTitle,
                                                     const char *bstrArtist,
                                                     const char *bstrAlbum,
                                                     const char *bstrUFID,
                                                     const char *bstrWMID);

HRESULT CVIFUNC WMPLib_IWMPBaseExternalGetversion (CAObjHandle objectHandle,
                                                   ERRORINFO *errorInfo,
                                                   char **pBSTR);

HRESULT CVIFUNC WMPLib_IWMPBaseExternalGetappColorLight (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         char **pbstrColor);

HRESULT CVIFUNC WMPLib_IWMPBaseExternalSetOnColorChange (CAObjHandle objectHandle,
                                                         ERRORINFO *errorInfo,
                                                         CAObjHandle newValue);

HRESULT CVIFUNC WMPLib_IWMPOfflineExternalGetversion (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      char **pBSTR);

HRESULT CVIFUNC WMPLib_IWMPOfflineExternalGetappColorLight (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo,
                                                            char **pbstrColor);

HRESULT CVIFUNC WMPLib_IWMPOfflineExternalSetOnColorChange (CAObjHandle objectHandle,
                                                            ERRORINFO *errorInfo,
                                                            CAObjHandle newValue);

HRESULT CVIFUNC WMPLib_IWMPOfflineExternalforceOnline (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo);

HRESULT CVIFUNC WMPLib_IWMPDMRAVTransportServiceGetTransportState (CAObjHandle objectHandle,
                                                                   ERRORINFO *errorInfo,
                                                                   char **pbstrTransportState);

HRESULT CVIFUNC WMPLib_IWMPDMRAVTransportServiceGetTransportStatus (CAObjHandle objectHandle,
                                                                    ERRORINFO *errorInfo,
                                                                    char **pbstrTransportStatus);

HRESULT CVIFUNC WMPLib_IWMPDMRAVTransportServiceGetPlaybackStorageMedium (CAObjHandle objectHandle,
                                                                          ERRORINFO *errorInfo,
                                                                          char **pbstrPlaybackStorageMedium);

HRESULT CVIFUNC WMPLib_IWMPDMRAVTransportServiceGetRecordStorageMedium (CAObjHandle objectHandle,
                                                                        ERRORINFO *errorInfo,
                                                                        char **pbstrRecordStorageMedium);

HRESULT CVIFUNC WMPLib_IWMPDMRAVTransportServiceGetPossiblePlaybackStorageMedia (CAObjHandle objectHandle,
                                                                                 ERRORINFO *errorInfo,
                                                                                 char **pbstrPossiblePlaybackStorageMed);

HRESULT CVIFUNC WMPLib_IWMPDMRAVTransportServiceGetPossibleRecordStorageMedia (CAObjHandle objectHandle,
                                                                               ERRORINFO *errorInfo,
                                                                               char **pbstrPossibleRecordStorageMedia);

HRESULT CVIFUNC WMPLib_IWMPDMRAVTransportServiceGetCurrentPlayMode (CAObjHandle objectHandle,
                                                                    ERRORINFO *errorInfo,
                                                                    char **pbstrCurrentPlayMode);

HRESULT CVIFUNC WMPLib_IWMPDMRAVTransportServiceGetTransportPlaySpeed (CAObjHandle objectHandle,
                                                                       ERRORINFO *errorInfo,
                                                                       char **pbstrTransportPlaySpeed);

HRESULT CVIFUNC WMPLib_IWMPDMRAVTransportServiceGetRecordMediumWriteStatus (CAObjHandle objectHandle,
                                                                            ERRORINFO *errorInfo,
                                                                            char **pbstrRecordMediumWriteStatus);

HRESULT CVIFUNC WMPLib_IWMPDMRAVTransportServiceGetCurrentRecordQualityMode (CAObjHandle objectHandle,
                                                                             ERRORINFO *errorInfo,
                                                                             char **pbstrCurrentRecordQualityMode);

HRESULT CVIFUNC WMPLib_IWMPDMRAVTransportServiceGetPossibleRecordQualityModes (CAObjHandle objectHandle,
                                                                               ERRORINFO *errorInfo,
                                                                               char **pbstrPossibleRecordQualityModes);

HRESULT CVIFUNC WMPLib_IWMPDMRAVTransportServiceGetNumberOfTracks (CAObjHandle objectHandle,
                                                                   ERRORINFO *errorInfo,
                                                                   unsigned long *pulNumberOfTracks);

HRESULT CVIFUNC WMPLib_IWMPDMRAVTransportServiceGetCurrentTrack (CAObjHandle objectHandle,
                                                                 ERRORINFO *errorInfo,
                                                                 unsigned long *pulCurrentTrack);

HRESULT CVIFUNC WMPLib_IWMPDMRAVTransportServiceGetCurrentTrackDuration (CAObjHandle objectHandle,
                                                                         ERRORINFO *errorInfo,
                                                                         char **pbstrCurrentTrackDuration);

HRESULT CVIFUNC WMPLib_IWMPDMRAVTransportServiceGetCurrentMediaDuration (CAObjHandle objectHandle,
                                                                         ERRORINFO *errorInfo,
                                                                         char **pbstrCurrentMediaDuration);

HRESULT CVIFUNC WMPLib_IWMPDMRAVTransportServiceGetCurrentTrackMetaData (CAObjHandle objectHandle,
                                                                         ERRORINFO *errorInfo,
                                                                         char **pbstrCurrentTrackMetaData);

HRESULT CVIFUNC WMPLib_IWMPDMRAVTransportServiceGetCurrentTrackURI (CAObjHandle objectHandle,
                                                                    ERRORINFO *errorInfo,
                                                                    char **pbstrCurrentTrackURI);

HRESULT CVIFUNC WMPLib_IWMPDMRAVTransportServiceGetAVTransportURI (CAObjHandle objectHandle,
                                                                   ERRORINFO *errorInfo,
                                                                   char **pbstrAVTransportURI);

HRESULT CVIFUNC WMPLib_IWMPDMRAVTransportServiceGetAVTransportURIMetaData (CAObjHandle objectHandle,
                                                                           ERRORINFO *errorInfo,
                                                                           char **pbstrAVTransportURIMetaData);

HRESULT CVIFUNC WMPLib_IWMPDMRAVTransportServiceGetNextAVTransportURI (CAObjHandle objectHandle,
                                                                       ERRORINFO *errorInfo,
                                                                       char **pbstrNextAVTransportURI);

HRESULT CVIFUNC WMPLib_IWMPDMRAVTransportServiceGetNextAVTransportURIMetaData (CAObjHandle objectHandle,
                                                                               ERRORINFO *errorInfo,
                                                                               char **pbstrNextAVTransportURIMetaData);

HRESULT CVIFUNC WMPLib_IWMPDMRAVTransportServiceGetRelativeTimePosition (CAObjHandle objectHandle,
                                                                         ERRORINFO *errorInfo,
                                                                         char **pRelativeTimePosition);

HRESULT CVIFUNC WMPLib_IWMPDMRAVTransportServiceGetAbsoluteTimePosition (CAObjHandle objectHandle,
                                                                         ERRORINFO *errorInfo,
                                                                         char **pbstrAbsoluteTimePosition);

HRESULT CVIFUNC WMPLib_IWMPDMRAVTransportServiceGetRelativeCounterPosition (CAObjHandle objectHandle,
                                                                            ERRORINFO *errorInfo,
                                                                            long *plRelativeCounterPosition);

HRESULT CVIFUNC WMPLib_IWMPDMRAVTransportServiceGetAbsoluteCounterPosition (CAObjHandle objectHandle,
                                                                            ERRORINFO *errorInfo,
                                                                            long *plAbsoluteCounterPosition);

HRESULT CVIFUNC WMPLib_IWMPDMRAVTransportServiceGetCurrentTransportActionsProp (CAObjHandle objectHandle,
                                                                                ERRORINFO *errorInfo,
                                                                                char **pbstrCurrentTransportActions);

HRESULT CVIFUNC WMPLib_IWMPDMRAVTransportServiceGetLastChange (CAObjHandle objectHandle,
                                                               ERRORINFO *errorInfo,
                                                               char **pbstrLastChange);

HRESULT CVIFUNC WMPLib_IWMPDMRAVTransportServiceGetA_ARG_TYPE_SeekMode (CAObjHandle objectHandle,
                                                                        ERRORINFO *errorInfo,
                                                                        char **pbstrSeekMode);

HRESULT CVIFUNC WMPLib_IWMPDMRAVTransportServiceGetA_ARG_TYPE_SeekTarget (CAObjHandle objectHandle,
                                                                          ERRORINFO *errorInfo,
                                                                          char **pbstrSeekTarget);

HRESULT CVIFUNC WMPLib_IWMPDMRAVTransportServiceGetA_ARG_TYPE_InstanceID (CAObjHandle objectHandle,
                                                                          ERRORINFO *errorInfo,
                                                                          unsigned long *pulInstanceID);

HRESULT CVIFUNC WMPLib_IWMPDMRAVTransportServiceGetCurrentProtocolInfo (CAObjHandle objectHandle,
                                                                        ERRORINFO *errorInfo,
                                                                        char **pstrProtocolInfo);

HRESULT CVIFUNC WMPLib_IWMPDMRAVTransportServiceSetAVTransportURI (CAObjHandle objectHandle,
                                                                   ERRORINFO *errorInfo,
                                                                   LPUNKNOWN punkRemoteEndpointInfo,
                                                                   unsigned long ulInstanceID,
                                                                   const char *bstrCurrentURI,
                                                                   const char *bstrCurrentURIMetaData);

HRESULT CVIFUNC WMPLib_IWMPDMRAVTransportServiceGetMediaInfo (CAObjHandle objectHandle,
                                                              ERRORINFO *errorInfo,
                                                              unsigned long ulInstanceID,
                                                              unsigned long *pulNumTracks,
                                                              char **pbstrMediaDuration,
                                                              char **pbstrCurrentURI,
                                                              char **pbstrCurrentURIMetaData,
                                                              char **pbstrNextURI,
                                                              char **pNextURIMetaData,
                                                              char **pbstrPlayMedium,
                                                              char **pbstrRecordMedium,
                                                              char **pbstrWriteStatus);

HRESULT CVIFUNC WMPLib_IWMPDMRAVTransportServiceGetTransportInfo (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo,
                                                                  unsigned long ulInstanceID,
                                                                  char **pbstrCurrentTransportState,
                                                                  char **pbstrCurrentTransportStatus,
                                                                  char **pbstrCurrentSpeed);

HRESULT CVIFUNC WMPLib_IWMPDMRAVTransportServiceGetPositionInfo (CAObjHandle objectHandle,
                                                                 ERRORINFO *errorInfo,
                                                                 unsigned long ulInstanceID,
                                                                 unsigned long *pTrack,
                                                                 char **pbstrTrackDuration,
                                                                 char **pbstrTrackMetaData,
                                                                 char **pbstrTrackURI,
                                                                 char **pbstrRelTime,
                                                                 char **pbstrAbsTime,
                                                                 long *plRelCount,
                                                                 long *plAbsCount);

HRESULT CVIFUNC WMPLib_IWMPDMRAVTransportServiceGetDeviceCapabilities (CAObjHandle objectHandle,
                                                                       ERRORINFO *errorInfo,
                                                                       unsigned long ulInstanceID,
                                                                       char **pbstrPlayMedia,
                                                                       char **pbstrRecMedia,
                                                                       char **pbstrRecQualityModes);

HRESULT CVIFUNC WMPLib_IWMPDMRAVTransportServiceGetTransportSettings (CAObjHandle objectHandle,
                                                                      ERRORINFO *errorInfo,
                                                                      unsigned long ulInstanceID,
                                                                      char **pbstrPlayMode,
                                                                      char **pbstrRecQualityMode);

HRESULT CVIFUNC WMPLib_IWMPDMRAVTransportServicestop (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      unsigned long ulInstanceID);

HRESULT CVIFUNC WMPLib_IWMPDMRAVTransportServiceplay (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      unsigned long ulInstanceID,
                                                      const char *bstrSpeed);

HRESULT CVIFUNC WMPLib_IWMPDMRAVTransportServicepause (CAObjHandle objectHandle,
                                                       ERRORINFO *errorInfo,
                                                       unsigned long ulInstanceID);

HRESULT CVIFUNC WMPLib_IWMPDMRAVTransportServiceSeek (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      unsigned long ulInstanceID,
                                                      const char *bstrUnit,
                                                      const char *bstrTarget);

HRESULT CVIFUNC WMPLib_IWMPDMRAVTransportServicenext (CAObjHandle objectHandle,
                                                      ERRORINFO *errorInfo,
                                                      unsigned long ulInstanceID);

HRESULT CVIFUNC WMPLib_IWMPDMRAVTransportServiceprevious (CAObjHandle objectHandle,
                                                          ERRORINFO *errorInfo,
                                                          unsigned long ulInstanceID);

HRESULT CVIFUNC WMPLib_IWMPDMRAVTransportServiceGetCurrentTransportActions (CAObjHandle objectHandle,
                                                                            ERRORINFO *errorInfo,
                                                                            unsigned long ulInstanceID,
                                                                            char **pbstrActions);

HRESULT CVIFUNC WMPLib_IWMPDMRAVTransportServiceSetNextAVTransportURI (CAObjHandle objectHandle,
                                                                       ERRORINFO *errorInfo,
                                                                       LPUNKNOWN punkRemoteEndpointInfo,
                                                                       unsigned long ulInstanceID,
                                                                       const char *bstrNextURI,
                                                                       const char *bstrNextURIMetaData);

HRESULT CVIFUNC WMPLib_IWMPDMRConnectionManagerServiceGetSourceProtocolInfo (CAObjHandle objectHandle,
                                                                             ERRORINFO *errorInfo,
                                                                             char **pbstrSourceProtocolInfo);

HRESULT CVIFUNC WMPLib_IWMPDMRConnectionManagerServiceGetSinkProtocolInfo (CAObjHandle objectHandle,
                                                                           ERRORINFO *errorInfo,
                                                                           char **pbstrSinkProtocolInfo);

HRESULT CVIFUNC WMPLib_IWMPDMRConnectionManagerServiceGetCurrentConnectionIDsProp (CAObjHandle objectHandle,
                                                                                   ERRORINFO *errorInfo,
                                                                                   char **pbstrCurrentConnectionIDs);

HRESULT CVIFUNC WMPLib_IWMPDMRConnectionManagerServiceGetA_ARG_TYPE_ConnectionStatus (CAObjHandle objectHandle,
                                                                                      ERRORINFO *errorInfo,
                                                                                      char **pbstrA_ARG_TYPE_ConnectionStatu);

HRESULT CVIFUNC WMPLib_IWMPDMRConnectionManagerServiceGetA_ARG_TYPE_ConnectionManager (CAObjHandle objectHandle,
                                                                                       ERRORINFO *errorInfo,
                                                                                       char **pbstrA_ARG_TYPE_ConnectionManag);

HRESULT CVIFUNC WMPLib_IWMPDMRConnectionManagerServiceGetA_ARG_TYPE_Direction (CAObjHandle objectHandle,
                                                                               ERRORINFO *errorInfo,
                                                                               char **pbstrA_ARG_TYPE_Direction);

HRESULT CVIFUNC WMPLib_IWMPDMRConnectionManagerServiceGetA_ARG_TYPE_ProtocolInfo (CAObjHandle objectHandle,
                                                                                  ERRORINFO *errorInfo,
                                                                                  char **pbstrA_ARG_TYPE_ProtocolInfo);

HRESULT CVIFUNC WMPLib_IWMPDMRConnectionManagerServiceGetA_ARG_TYPE_ConnectionID (CAObjHandle objectHandle,
                                                                                  ERRORINFO *errorInfo,
                                                                                  long *plA_ARG_TYPE_ConnectionID);

HRESULT CVIFUNC WMPLib_IWMPDMRConnectionManagerServiceGetA_ARG_TYPE_AVTransportID (CAObjHandle objectHandle,
                                                                                   ERRORINFO *errorInfo,
                                                                                   long *plA_ARG_TYPE_AVTransportID);

HRESULT CVIFUNC WMPLib_IWMPDMRConnectionManagerServiceGetA_ARG_TYPE_RcsID (CAObjHandle objectHandle,
                                                                           ERRORINFO *errorInfo,
                                                                           long *plA_ARG_TYPE_RcsID);

HRESULT CVIFUNC WMPLib_IWMPDMRConnectionManagerServiceGetProtocolInfo (CAObjHandle objectHandle,
                                                                       ERRORINFO *errorInfo,
                                                                       char **pbstrSource,
                                                                       char **pbstrSink);

HRESULT CVIFUNC WMPLib_IWMPDMRConnectionManagerServiceGetCurrentConnectionIDs (CAObjHandle objectHandle,
                                                                               ERRORINFO *errorInfo,
                                                                               char **pbstrConnectionIDs);

HRESULT CVIFUNC WMPLib_IWMPDMRConnectionManagerServiceGetCurrentConnectionInfo (CAObjHandle objectHandle,
                                                                                ERRORINFO *errorInfo,
                                                                                long lConnectionID,
                                                                                long *plResID,
                                                                                long *plAVTransportID,
                                                                                char **pbstrProtocolInfo,
                                                                                char **pbstrPeerConnectionManager,
                                                                                long *plPeerConnectionID,
                                                                                char **pbstrDirection,
                                                                                char **pbstrStatus);

HRESULT CVIFUNC WMPLib_IWMPDMRRenderingControlServiceGetLastChange (CAObjHandle objectHandle,
                                                                    ERRORINFO *errorInfo,
                                                                    char **pbstrLastChange);

HRESULT CVIFUNC WMPLib_IWMPDMRRenderingControlServiceGetPresetNameList (CAObjHandle objectHandle,
                                                                        ERRORINFO *errorInfo,
                                                                        char **pbstrPresetNameList);

HRESULT CVIFUNC WMPLib_IWMPDMRRenderingControlServiceGetmute (CAObjHandle objectHandle,
                                                              ERRORINFO *errorInfo,
                                                              VBOOL *pbMute);

HRESULT CVIFUNC WMPLib_IWMPDMRRenderingControlServiceGetvolume (CAObjHandle objectHandle,
                                                                ERRORINFO *errorInfo,
                                                                unsigned short *puiVolume);

HRESULT CVIFUNC WMPLib_IWMPDMRRenderingControlServiceGetA_ARG_TYPE_Channel (CAObjHandle objectHandle,
                                                                            ERRORINFO *errorInfo,
                                                                            char **pbstrA_ARG_TYPE_Channel);

HRESULT CVIFUNC WMPLib_IWMPDMRRenderingControlServiceGetA_ARG_TYPE_InstanceID (CAObjHandle objectHandle,
                                                                               ERRORINFO *errorInfo,
                                                                               unsigned long *pulA_ARG_TYPE_InstanceID);

HRESULT CVIFUNC WMPLib_IWMPDMRRenderingControlServiceGetA_ARG_TYPE_PresetName (CAObjHandle objectHandle,
                                                                               ERRORINFO *errorInfo,
                                                                               char **pbstrA_ARG_TYPE_PresetName);

HRESULT CVIFUNC WMPLib_IWMPDMRRenderingControlServiceListPresets (CAObjHandle objectHandle,
                                                                  ERRORINFO *errorInfo,
                                                                  unsigned long ulInstanceID,
                                                                  char **pbstrCurrentPresetList);

HRESULT CVIFUNC WMPLib_IWMPDMRRenderingControlServiceSelectPreset (CAObjHandle objectHandle,
                                                                   ERRORINFO *errorInfo,
                                                                   unsigned long ulInstanceID,
                                                                   const char *bstrPresetName);

HRESULT CVIFUNC WMPLib_IWMPDMRRenderingControlServiceGetMute (CAObjHandle objectHandle,
                                                              ERRORINFO *errorInfo,
                                                              unsigned long ulInstanceID,
                                                              const char *bstrChannel,
                                                              VBOOL *pbCurrentMute);

HRESULT CVIFUNC WMPLib_IWMPDMRRenderingControlServiceSetMute (CAObjHandle objectHandle,
                                                              ERRORINFO *errorInfo,
                                                              unsigned long ulInstanceID,
                                                              const char *bstrChannel,
                                                              VBOOL bDesiredMute);

HRESULT CVIFUNC WMPLib_IWMPDMRRenderingControlServiceGetVolume (CAObjHandle objectHandle,
                                                                ERRORINFO *errorInfo,
                                                                unsigned long ulInstanceID,
                                                                const char *bstrChannel,
                                                                unsigned short *puiCurrentVolume);

HRESULT CVIFUNC WMPLib_IWMPDMRRenderingControlServiceSetVolume (CAObjHandle objectHandle,
                                                                ERRORINFO *errorInfo,
                                                                unsigned long ulInstanceID,
                                                                const char *bstrChannel,
                                                                unsigned short uiDesiredVolume);

HRESULT CVIFUNC WMPLib__WMPOCXEventsRegOnOpenStateChange (CAObjHandle serverObject,
                                                          _WMPOCXEventsRegOnOpenStateChange_CallbackType callbackFunction,
                                                          void *callbackData,
                                                          int enableCallbacks,
                                                          int *callbackId);

HRESULT CVIFUNC WMPLib__WMPOCXEventsRegOnPlayStateChange (CAObjHandle serverObject,
                                                          _WMPOCXEventsRegOnPlayStateChange_CallbackType callbackFunction,
                                                          void *callbackData,
                                                          int enableCallbacks,
                                                          int *callbackId);

HRESULT CVIFUNC WMPLib__WMPOCXEventsRegOnAudioLanguageChange (CAObjHandle serverObject,
                                                              _WMPOCXEventsRegOnAudioLanguageChange_CallbackType callbackFunction,
                                                              void *callbackData,
                                                              int enableCallbacks,
                                                              int *callbackId);

HRESULT CVIFUNC WMPLib__WMPOCXEventsRegOnStatusChange (CAObjHandle serverObject,
                                                       _WMPOCXEventsRegOnStatusChange_CallbackType callbackFunction,
                                                       void *callbackData,
                                                       int enableCallbacks,
                                                       int *callbackId);

HRESULT CVIFUNC WMPLib__WMPOCXEventsRegOnScriptCommand (CAObjHandle serverObject,
                                                        _WMPOCXEventsRegOnScriptCommand_CallbackType callbackFunction,
                                                        void *callbackData,
                                                        int enableCallbacks,
                                                        int *callbackId);

HRESULT CVIFUNC WMPLib__WMPOCXEventsRegOnNewStream (CAObjHandle serverObject,
                                                    _WMPOCXEventsRegOnNewStream_CallbackType callbackFunction,
                                                    void *callbackData,
                                                    int enableCallbacks,
                                                    int *callbackId);

HRESULT CVIFUNC WMPLib__WMPOCXEventsRegOnDisconnect (CAObjHandle serverObject,
                                                     _WMPOCXEventsRegOnDisconnect_CallbackType callbackFunction,
                                                     void *callbackData,
                                                     int enableCallbacks,
                                                     int *callbackId);

HRESULT CVIFUNC WMPLib__WMPOCXEventsRegOnBuffering (CAObjHandle serverObject,
                                                    _WMPOCXEventsRegOnBuffering_CallbackType callbackFunction,
                                                    void *callbackData,
                                                    int enableCallbacks,
                                                    int *callbackId);

HRESULT CVIFUNC WMPLib__WMPOCXEventsRegOnError (CAObjHandle serverObject,
                                                _WMPOCXEventsRegOnError_CallbackType callbackFunction,
                                                void *callbackData,
                                                int enableCallbacks,
                                                int *callbackId);

HRESULT CVIFUNC WMPLib__WMPOCXEventsRegOnWarning (CAObjHandle serverObject,
                                                  _WMPOCXEventsRegOnWarning_CallbackType callbackFunction,
                                                  void *callbackData,
                                                  int enableCallbacks,
                                                  int *callbackId);

HRESULT CVIFUNC WMPLib__WMPOCXEventsRegOnEndOfStream (CAObjHandle serverObject,
                                                      _WMPOCXEventsRegOnEndOfStream_CallbackType callbackFunction,
                                                      void *callbackData,
                                                      int enableCallbacks,
                                                      int *callbackId);

HRESULT CVIFUNC WMPLib__WMPOCXEventsRegOnPositionChange (CAObjHandle serverObject,
                                                         _WMPOCXEventsRegOnPositionChange_CallbackType callbackFunction,
                                                         void *callbackData,
                                                         int enableCallbacks,
                                                         int *callbackId);

HRESULT CVIFUNC WMPLib__WMPOCXEventsRegOnMarkerHit (CAObjHandle serverObject,
                                                    _WMPOCXEventsRegOnMarkerHit_CallbackType callbackFunction,
                                                    void *callbackData,
                                                    int enableCallbacks,
                                                    int *callbackId);

HRESULT CVIFUNC WMPLib__WMPOCXEventsRegOnDurationUnitChange (CAObjHandle serverObject,
                                                             _WMPOCXEventsRegOnDurationUnitChange_CallbackType callbackFunction,
                                                             void *callbackData,
                                                             int enableCallbacks,
                                                             int *callbackId);

HRESULT CVIFUNC WMPLib__WMPOCXEventsRegOnCdromMediaChange (CAObjHandle serverObject,
                                                           _WMPOCXEventsRegOnCdromMediaChange_CallbackType callbackFunction,
                                                           void *callbackData,
                                                           int enableCallbacks,
                                                           int *callbackId);

HRESULT CVIFUNC WMPLib__WMPOCXEventsRegOnPlaylistChange (CAObjHandle serverObject,
                                                         _WMPOCXEventsRegOnPlaylistChange_CallbackType callbackFunction,
                                                         void *callbackData,
                                                         int enableCallbacks,
                                                         int *callbackId);

HRESULT CVIFUNC WMPLib__WMPOCXEventsRegOnCurrentPlaylistChange (CAObjHandle serverObject,
                                                                _WMPOCXEventsRegOnCurrentPlaylistChange_CallbackType callbackFunction,
                                                                void *callbackData,
                                                                int enableCallbacks,
                                                                int *callbackId);

HRESULT CVIFUNC WMPLib__WMPOCXEventsRegOnCurrentPlaylistItemAvailable (CAObjHandle serverObject,
                                                                       _WMPOCXEventsRegOnCurrentPlaylistItemAvailable_CallbackType callbackFunction,
                                                                       void *callbackData,
                                                                       int enableCallbacks,
                                                                       int *callbackId);

HRESULT CVIFUNC WMPLib__WMPOCXEventsRegOnMediaChange (CAObjHandle serverObject,
                                                      _WMPOCXEventsRegOnMediaChange_CallbackType callbackFunction,
                                                      void *callbackData,
                                                      int enableCallbacks,
                                                      int *callbackId);

HRESULT CVIFUNC WMPLib__WMPOCXEventsRegOnCurrentMediaItemAvailable (CAObjHandle serverObject,
                                                                    _WMPOCXEventsRegOnCurrentMediaItemAvailable_CallbackType callbackFunction,
                                                                    void *callbackData,
                                                                    int enableCallbacks,
                                                                    int *callbackId);

HRESULT CVIFUNC WMPLib__WMPOCXEventsRegOnCurrentItemChange (CAObjHandle serverObject,
                                                            _WMPOCXEventsRegOnCurrentItemChange_CallbackType callbackFunction,
                                                            void *callbackData,
                                                            int enableCallbacks,
                                                            int *callbackId);

HRESULT CVIFUNC WMPLib__WMPOCXEventsRegOnMediaCollectionChange (CAObjHandle serverObject,
                                                                _WMPOCXEventsRegOnMediaCollectionChange_CallbackType callbackFunction,
                                                                void *callbackData,
                                                                int enableCallbacks,
                                                                int *callbackId);

HRESULT CVIFUNC WMPLib__WMPOCXEventsRegOnMediaCollectionAttributeStringAdded (CAObjHandle serverObject,
                                                                              _WMPOCXEventsRegOnMediaCollectionAttributeStringAdded_CallbackType callbackFunction,
                                                                              void *callbackData,
                                                                              int enableCallbacks,
                                                                              int *callbackId);

HRESULT CVIFUNC WMPLib__WMPOCXEventsRegOnMediaCollectionAttributeStringRemoved (CAObjHandle serverObject,
                                                                                _WMPOCXEventsRegOnMediaCollectionAttributeStringRemoved_CallbackType callbackFunction,
                                                                                void *callbackData,
                                                                                int enableCallbacks,
                                                                                int *callbackId);

HRESULT CVIFUNC WMPLib__WMPOCXEventsRegOnMediaCollectionAttributeStringChanged (CAObjHandle serverObject,
                                                                                _WMPOCXEventsRegOnMediaCollectionAttributeStringChanged_CallbackType callbackFunction,
                                                                                void *callbackData,
                                                                                int enableCallbacks,
                                                                                int *callbackId);

HRESULT CVIFUNC WMPLib__WMPOCXEventsRegOnPlaylistCollectionChange (CAObjHandle serverObject,
                                                                   _WMPOCXEventsRegOnPlaylistCollectionChange_CallbackType callbackFunction,
                                                                   void *callbackData,
                                                                   int enableCallbacks,
                                                                   int *callbackId);

HRESULT CVIFUNC WMPLib__WMPOCXEventsRegOnPlaylistCollectionPlaylistAdded (CAObjHandle serverObject,
                                                                          _WMPOCXEventsRegOnPlaylistCollectionPlaylistAdded_CallbackType callbackFunction,
                                                                          void *callbackData,
                                                                          int enableCallbacks,
                                                                          int *callbackId);

HRESULT CVIFUNC WMPLib__WMPOCXEventsRegOnPlaylistCollectionPlaylistRemoved (CAObjHandle serverObject,
                                                                            _WMPOCXEventsRegOnPlaylistCollectionPlaylistRemoved_CallbackType callbackFunction,
                                                                            void *callbackData,
                                                                            int enableCallbacks,
                                                                            int *callbackId);

HRESULT CVIFUNC WMPLib__WMPOCXEventsRegOnPlaylistCollectionPlaylistSetAsDeleted (CAObjHandle serverObject,
                                                                                 _WMPOCXEventsRegOnPlaylistCollectionPlaylistSetAsDeleted_CallbackType callbackFunction,
                                                                                 void *callbackData,
                                                                                 int enableCallbacks,
                                                                                 int *callbackId);

HRESULT CVIFUNC WMPLib__WMPOCXEventsRegOnModeChange (CAObjHandle serverObject,
                                                     _WMPOCXEventsRegOnModeChange_CallbackType callbackFunction,
                                                     void *callbackData,
                                                     int enableCallbacks,
                                                     int *callbackId);

HRESULT CVIFUNC WMPLib__WMPOCXEventsRegOnMediaError (CAObjHandle serverObject,
                                                     _WMPOCXEventsRegOnMediaError_CallbackType callbackFunction,
                                                     void *callbackData,
                                                     int enableCallbacks,
                                                     int *callbackId);

HRESULT CVIFUNC WMPLib__WMPOCXEventsRegOnOpenPlaylistSwitch (CAObjHandle serverObject,
                                                             _WMPOCXEventsRegOnOpenPlaylistSwitch_CallbackType callbackFunction,
                                                             void *callbackData,
                                                             int enableCallbacks,
                                                             int *callbackId);

HRESULT CVIFUNC WMPLib__WMPOCXEventsRegOnDomainChange (CAObjHandle serverObject,
                                                       _WMPOCXEventsRegOnDomainChange_CallbackType callbackFunction,
                                                       void *callbackData,
                                                       int enableCallbacks,
                                                       int *callbackId);

HRESULT CVIFUNC WMPLib__WMPOCXEventsRegOnSwitchedToPlayerApplication (CAObjHandle serverObject,
                                                                      _WMPOCXEventsRegOnSwitchedToPlayerApplication_CallbackType callbackFunction,
                                                                      void *callbackData,
                                                                      int enableCallbacks,
                                                                      int *callbackId);

HRESULT CVIFUNC WMPLib__WMPOCXEventsRegOnSwitchedToControl (CAObjHandle serverObject,
                                                            _WMPOCXEventsRegOnSwitchedToControl_CallbackType callbackFunction,
                                                            void *callbackData,
                                                            int enableCallbacks,
                                                            int *callbackId);

HRESULT CVIFUNC WMPLib__WMPOCXEventsRegOnPlayerDockedStateChange (CAObjHandle serverObject,
                                                                  _WMPOCXEventsRegOnPlayerDockedStateChange_CallbackType callbackFunction,
                                                                  void *callbackData,
                                                                  int enableCallbacks,
                                                                  int *callbackId);

HRESULT CVIFUNC WMPLib__WMPOCXEventsRegOnPlayerReconnect (CAObjHandle serverObject,
                                                          _WMPOCXEventsRegOnPlayerReconnect_CallbackType callbackFunction,
                                                          void *callbackData,
                                                          int enableCallbacks,
                                                          int *callbackId);

HRESULT CVIFUNC WMPLib__WMPOCXEventsRegOnClick (CAObjHandle serverObject,
                                                _WMPOCXEventsRegOnClick_CallbackType callbackFunction,
                                                void *callbackData,
                                                int enableCallbacks,
                                                int *callbackId);

HRESULT CVIFUNC WMPLib__WMPOCXEventsRegOnDoubleClick (CAObjHandle serverObject,
                                                      _WMPOCXEventsRegOnDoubleClick_CallbackType callbackFunction,
                                                      void *callbackData,
                                                      int enableCallbacks,
                                                      int *callbackId);

HRESULT CVIFUNC WMPLib__WMPOCXEventsRegOnKeyDown (CAObjHandle serverObject,
                                                  _WMPOCXEventsRegOnKeyDown_CallbackType callbackFunction,
                                                  void *callbackData,
                                                  int enableCallbacks,
                                                  int *callbackId);

HRESULT CVIFUNC WMPLib__WMPOCXEventsRegOnKeyPress (CAObjHandle serverObject,
                                                   _WMPOCXEventsRegOnKeyPress_CallbackType callbackFunction,
                                                   void *callbackData,
                                                   int enableCallbacks,
                                                   int *callbackId);

HRESULT CVIFUNC WMPLib__WMPOCXEventsRegOnKeyUp (CAObjHandle serverObject,
                                                _WMPOCXEventsRegOnKeyUp_CallbackType callbackFunction,
                                                void *callbackData,
                                                int enableCallbacks,
                                                int *callbackId);

HRESULT CVIFUNC WMPLib__WMPOCXEventsRegOnMouseDown (CAObjHandle serverObject,
                                                    _WMPOCXEventsRegOnMouseDown_CallbackType callbackFunction,
                                                    void *callbackData,
                                                    int enableCallbacks,
                                                    int *callbackId);

HRESULT CVIFUNC WMPLib__WMPOCXEventsRegOnMouseMove (CAObjHandle serverObject,
                                                    _WMPOCXEventsRegOnMouseMove_CallbackType callbackFunction,
                                                    void *callbackData,
                                                    int enableCallbacks,
                                                    int *callbackId);

HRESULT CVIFUNC WMPLib__WMPOCXEventsRegOnMouseUp (CAObjHandle serverObject,
                                                  _WMPOCXEventsRegOnMouseUp_CallbackType callbackFunction,
                                                  void *callbackData,
                                                  int enableCallbacks,
                                                  int *callbackId);

HRESULT CVIFUNC WMPLib__WMPOCXEventsRegOnDeviceConnect (CAObjHandle serverObject,
                                                        _WMPOCXEventsRegOnDeviceConnect_CallbackType callbackFunction,
                                                        void *callbackData,
                                                        int enableCallbacks,
                                                        int *callbackId);

HRESULT CVIFUNC WMPLib__WMPOCXEventsRegOnDeviceDisconnect (CAObjHandle serverObject,
                                                           _WMPOCXEventsRegOnDeviceDisconnect_CallbackType callbackFunction,
                                                           void *callbackData,
                                                           int enableCallbacks,
                                                           int *callbackId);

HRESULT CVIFUNC WMPLib__WMPOCXEventsRegOnDeviceStatusChange (CAObjHandle serverObject,
                                                             _WMPOCXEventsRegOnDeviceStatusChange_CallbackType callbackFunction,
                                                             void *callbackData,
                                                             int enableCallbacks,
                                                             int *callbackId);

HRESULT CVIFUNC WMPLib__WMPOCXEventsRegOnDeviceSyncStateChange (CAObjHandle serverObject,
                                                                _WMPOCXEventsRegOnDeviceSyncStateChange_CallbackType callbackFunction,
                                                                void *callbackData,
                                                                int enableCallbacks,
                                                                int *callbackId);

HRESULT CVIFUNC WMPLib__WMPOCXEventsRegOnDeviceSyncError (CAObjHandle serverObject,
                                                          _WMPOCXEventsRegOnDeviceSyncError_CallbackType callbackFunction,
                                                          void *callbackData,
                                                          int enableCallbacks,
                                                          int *callbackId);

HRESULT CVIFUNC WMPLib__WMPOCXEventsRegOnCreatePartnershipComplete (CAObjHandle serverObject,
                                                                    _WMPOCXEventsRegOnCreatePartnershipComplete_CallbackType callbackFunction,
                                                                    void *callbackData,
                                                                    int enableCallbacks,
                                                                    int *callbackId);

HRESULT CVIFUNC WMPLib__WMPOCXEventsRegOnCdromRipStateChange (CAObjHandle serverObject,
                                                              _WMPOCXEventsRegOnCdromRipStateChange_CallbackType callbackFunction,
                                                              void *callbackData,
                                                              int enableCallbacks,
                                                              int *callbackId);

HRESULT CVIFUNC WMPLib__WMPOCXEventsRegOnCdromRipMediaError (CAObjHandle serverObject,
                                                             _WMPOCXEventsRegOnCdromRipMediaError_CallbackType callbackFunction,
                                                             void *callbackData,
                                                             int enableCallbacks,
                                                             int *callbackId);

HRESULT CVIFUNC WMPLib__WMPOCXEventsRegOnCdromBurnStateChange (CAObjHandle serverObject,
                                                               _WMPOCXEventsRegOnCdromBurnStateChange_CallbackType callbackFunction,
                                                               void *callbackData,
                                                               int enableCallbacks,
                                                               int *callbackId);

HRESULT CVIFUNC WMPLib__WMPOCXEventsRegOnCdromBurnMediaError (CAObjHandle serverObject,
                                                              _WMPOCXEventsRegOnCdromBurnMediaError_CallbackType callbackFunction,
                                                              void *callbackData,
                                                              int enableCallbacks,
                                                              int *callbackId);

HRESULT CVIFUNC WMPLib__WMPOCXEventsRegOnCdromBurnError (CAObjHandle serverObject,
                                                         _WMPOCXEventsRegOnCdromBurnError_CallbackType callbackFunction,
                                                         void *callbackData,
                                                         int enableCallbacks,
                                                         int *callbackId);

HRESULT CVIFUNC WMPLib__WMPOCXEventsRegOnLibraryConnect (CAObjHandle serverObject,
                                                         _WMPOCXEventsRegOnLibraryConnect_CallbackType callbackFunction,
                                                         void *callbackData,
                                                         int enableCallbacks,
                                                         int *callbackId);

HRESULT CVIFUNC WMPLib__WMPOCXEventsRegOnLibraryDisconnect (CAObjHandle serverObject,
                                                            _WMPOCXEventsRegOnLibraryDisconnect_CallbackType callbackFunction,
                                                            void *callbackData,
                                                            int enableCallbacks,
                                                            int *callbackId);

HRESULT CVIFUNC WMPLib__WMPOCXEventsRegOnFolderScanStateChange (CAObjHandle serverObject,
                                                                _WMPOCXEventsRegOnFolderScanStateChange_CallbackType callbackFunction,
                                                                void *callbackData,
                                                                int enableCallbacks,
                                                                int *callbackId);

HRESULT CVIFUNC WMPLib__WMPOCXEventsRegOnStringCollectionChange (CAObjHandle serverObject,
                                                                 _WMPOCXEventsRegOnStringCollectionChange_CallbackType callbackFunction,
                                                                 void *callbackData,
                                                                 int enableCallbacks,
                                                                 int *callbackId);

HRESULT CVIFUNC WMPLib__WMPOCXEventsRegOnMediaCollectionMediaAdded (CAObjHandle serverObject,
                                                                    _WMPOCXEventsRegOnMediaCollectionMediaAdded_CallbackType callbackFunction,
                                                                    void *callbackData,
                                                                    int enableCallbacks,
                                                                    int *callbackId);

HRESULT CVIFUNC WMPLib__WMPOCXEventsRegOnMediaCollectionMediaRemoved (CAObjHandle serverObject,
                                                                      _WMPOCXEventsRegOnMediaCollectionMediaRemoved_CallbackType callbackFunction,
                                                                      void *callbackData,
                                                                      int enableCallbacks,
                                                                      int *callbackId);

HRESULT CVIFUNC WMPLib_IWMPButtonCtrlEventsRegOnonclick (CAObjHandle serverObject,
                                                         IWMPButtonCtrlEventsRegOnonclick_CallbackType callbackFunction,
                                                         void *callbackData,
                                                         int enableCallbacks,
                                                         int *callbackId);

HRESULT CVIFUNC WMPLib_IWMPSliderCtrlEventsRegOnondragbegin (CAObjHandle serverObject,
                                                             IWMPSliderCtrlEventsRegOnondragbegin_CallbackType callbackFunction,
                                                             void *callbackData,
                                                             int enableCallbacks,
                                                             int *callbackId);

HRESULT CVIFUNC WMPLib_IWMPSliderCtrlEventsRegOnondragend (CAObjHandle serverObject,
                                                           IWMPSliderCtrlEventsRegOnondragend_CallbackType callbackFunction,
                                                           void *callbackData,
                                                           int enableCallbacks,
                                                           int *callbackId);

HRESULT CVIFUNC WMPLib_IWMPSliderCtrlEventsRegOnonpositionchange (CAObjHandle serverObject,
                                                                  IWMPSliderCtrlEventsRegOnonpositionchange_CallbackType callbackFunction,
                                                                  void *callbackData,
                                                                  int enableCallbacks,
                                                                  int *callbackId);

HRESULT CVIFUNC WMPLib_IWMPVideoCtrlEventsRegOnonvideostart (CAObjHandle serverObject,
                                                             IWMPVideoCtrlEventsRegOnonvideostart_CallbackType callbackFunction,
                                                             void *callbackData,
                                                             int enableCallbacks,
                                                             int *callbackId);

HRESULT CVIFUNC WMPLib_IWMPVideoCtrlEventsRegOnonvideoend (CAObjHandle serverObject,
                                                           IWMPVideoCtrlEventsRegOnonvideoend_CallbackType callbackFunction,
                                                           void *callbackData,
                                                           int enableCallbacks,
                                                           int *callbackId);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonEventsRegOnonblur (CAObjHandle serverObject,
                                                            IWMPRegionalButtonEventsRegOnonblur_CallbackType callbackFunction,
                                                            void *callbackData,
                                                            int enableCallbacks,
                                                            int *callbackId);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonEventsRegOnonfocus (CAObjHandle serverObject,
                                                             IWMPRegionalButtonEventsRegOnonfocus_CallbackType callbackFunction,
                                                             void *callbackData,
                                                             int enableCallbacks,
                                                             int *callbackId);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonEventsRegOnonclick (CAObjHandle serverObject,
                                                             IWMPRegionalButtonEventsRegOnonclick_CallbackType callbackFunction,
                                                             void *callbackData,
                                                             int enableCallbacks,
                                                             int *callbackId);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonEventsRegOnondblclick (CAObjHandle serverObject,
                                                                IWMPRegionalButtonEventsRegOnondblclick_CallbackType callbackFunction,
                                                                void *callbackData,
                                                                int enableCallbacks,
                                                                int *callbackId);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonEventsRegOnonmousedown (CAObjHandle serverObject,
                                                                 IWMPRegionalButtonEventsRegOnonmousedown_CallbackType callbackFunction,
                                                                 void *callbackData,
                                                                 int enableCallbacks,
                                                                 int *callbackId);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonEventsRegOnonmouseup (CAObjHandle serverObject,
                                                               IWMPRegionalButtonEventsRegOnonmouseup_CallbackType callbackFunction,
                                                               void *callbackData,
                                                               int enableCallbacks,
                                                               int *callbackId);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonEventsRegOnonmousemove (CAObjHandle serverObject,
                                                                 IWMPRegionalButtonEventsRegOnonmousemove_CallbackType callbackFunction,
                                                                 void *callbackData,
                                                                 int enableCallbacks,
                                                                 int *callbackId);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonEventsRegOnonmouseover (CAObjHandle serverObject,
                                                                 IWMPRegionalButtonEventsRegOnonmouseover_CallbackType callbackFunction,
                                                                 void *callbackData,
                                                                 int enableCallbacks,
                                                                 int *callbackId);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonEventsRegOnonmouseout (CAObjHandle serverObject,
                                                                IWMPRegionalButtonEventsRegOnonmouseout_CallbackType callbackFunction,
                                                                void *callbackData,
                                                                int enableCallbacks,
                                                                int *callbackId);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonEventsRegOnonkeypress (CAObjHandle serverObject,
                                                                IWMPRegionalButtonEventsRegOnonkeypress_CallbackType callbackFunction,
                                                                void *callbackData,
                                                                int enableCallbacks,
                                                                int *callbackId);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonEventsRegOnonkeydown (CAObjHandle serverObject,
                                                               IWMPRegionalButtonEventsRegOnonkeydown_CallbackType callbackFunction,
                                                               void *callbackData,
                                                               int enableCallbacks,
                                                               int *callbackId);

HRESULT CVIFUNC WMPLib_IWMPRegionalButtonEventsRegOnonkeyup (CAObjHandle serverObject,
                                                             IWMPRegionalButtonEventsRegOnonkeyup_CallbackType callbackFunction,
                                                             void *callbackData,
                                                             int enableCallbacks,
                                                             int *callbackId);

HRESULT CVIFUNC WMPLib_IWMPCustomSliderCtrlEventsRegOnondragbegin (CAObjHandle serverObject,
                                                                   IWMPCustomSliderCtrlEventsRegOnondragbegin_CallbackType callbackFunction,
                                                                   void *callbackData,
                                                                   int enableCallbacks,
                                                                   int *callbackId);

HRESULT CVIFUNC WMPLib_IWMPCustomSliderCtrlEventsRegOnondragend (CAObjHandle serverObject,
                                                                 IWMPCustomSliderCtrlEventsRegOnondragend_CallbackType callbackFunction,
                                                                 void *callbackData,
                                                                 int enableCallbacks,
                                                                 int *callbackId);

HRESULT CVIFUNC WMPLib_IWMPCustomSliderCtrlEventsRegOnonpositionchange (CAObjHandle serverObject,
                                                                        IWMPCustomSliderCtrlEventsRegOnonpositionchange_CallbackType callbackFunction,
                                                                        void *callbackData,
                                                                        int enableCallbacks,
                                                                        int *callbackId);

HRESULT CVIFUNC WMPLib__WMPCoreEventsRegOnOpenStateChange (CAObjHandle serverObject,
                                                           _WMPCoreEventsRegOnOpenStateChange_CallbackType callbackFunction,
                                                           void *callbackData,
                                                           int enableCallbacks,
                                                           int *callbackId);

HRESULT CVIFUNC WMPLib__WMPCoreEventsRegOnPlayStateChange (CAObjHandle serverObject,
                                                           _WMPCoreEventsRegOnPlayStateChange_CallbackType callbackFunction,
                                                           void *callbackData,
                                                           int enableCallbacks,
                                                           int *callbackId);

HRESULT CVIFUNC WMPLib__WMPCoreEventsRegOnAudioLanguageChange (CAObjHandle serverObject,
                                                               _WMPCoreEventsRegOnAudioLanguageChange_CallbackType callbackFunction,
                                                               void *callbackData,
                                                               int enableCallbacks,
                                                               int *callbackId);

HRESULT CVIFUNC WMPLib__WMPCoreEventsRegOnStatusChange (CAObjHandle serverObject,
                                                        _WMPCoreEventsRegOnStatusChange_CallbackType callbackFunction,
                                                        void *callbackData,
                                                        int enableCallbacks,
                                                        int *callbackId);

HRESULT CVIFUNC WMPLib__WMPCoreEventsRegOnScriptCommand (CAObjHandle serverObject,
                                                         _WMPCoreEventsRegOnScriptCommand_CallbackType callbackFunction,
                                                         void *callbackData,
                                                         int enableCallbacks,
                                                         int *callbackId);

HRESULT CVIFUNC WMPLib__WMPCoreEventsRegOnNewStream (CAObjHandle serverObject,
                                                     _WMPCoreEventsRegOnNewStream_CallbackType callbackFunction,
                                                     void *callbackData,
                                                     int enableCallbacks,
                                                     int *callbackId);

HRESULT CVIFUNC WMPLib__WMPCoreEventsRegOnDisconnect (CAObjHandle serverObject,
                                                      _WMPCoreEventsRegOnDisconnect_CallbackType callbackFunction,
                                                      void *callbackData,
                                                      int enableCallbacks,
                                                      int *callbackId);

HRESULT CVIFUNC WMPLib__WMPCoreEventsRegOnBuffering (CAObjHandle serverObject,
                                                     _WMPCoreEventsRegOnBuffering_CallbackType callbackFunction,
                                                     void *callbackData,
                                                     int enableCallbacks,
                                                     int *callbackId);

HRESULT CVIFUNC WMPLib__WMPCoreEventsRegOnError (CAObjHandle serverObject,
                                                 _WMPCoreEventsRegOnError_CallbackType callbackFunction,
                                                 void *callbackData,
                                                 int enableCallbacks,
                                                 int *callbackId);

HRESULT CVIFUNC WMPLib__WMPCoreEventsRegOnWarning (CAObjHandle serverObject,
                                                   _WMPCoreEventsRegOnWarning_CallbackType callbackFunction,
                                                   void *callbackData,
                                                   int enableCallbacks,
                                                   int *callbackId);

HRESULT CVIFUNC WMPLib__WMPCoreEventsRegOnEndOfStream (CAObjHandle serverObject,
                                                       _WMPCoreEventsRegOnEndOfStream_CallbackType callbackFunction,
                                                       void *callbackData,
                                                       int enableCallbacks,
                                                       int *callbackId);

HRESULT CVIFUNC WMPLib__WMPCoreEventsRegOnPositionChange (CAObjHandle serverObject,
                                                          _WMPCoreEventsRegOnPositionChange_CallbackType callbackFunction,
                                                          void *callbackData,
                                                          int enableCallbacks,
                                                          int *callbackId);

HRESULT CVIFUNC WMPLib__WMPCoreEventsRegOnMarkerHit (CAObjHandle serverObject,
                                                     _WMPCoreEventsRegOnMarkerHit_CallbackType callbackFunction,
                                                     void *callbackData,
                                                     int enableCallbacks,
                                                     int *callbackId);

HRESULT CVIFUNC WMPLib__WMPCoreEventsRegOnDurationUnitChange (CAObjHandle serverObject,
                                                              _WMPCoreEventsRegOnDurationUnitChange_CallbackType callbackFunction,
                                                              void *callbackData,
                                                              int enableCallbacks,
                                                              int *callbackId);

HRESULT CVIFUNC WMPLib__WMPCoreEventsRegOnCdromMediaChange (CAObjHandle serverObject,
                                                            _WMPCoreEventsRegOnCdromMediaChange_CallbackType callbackFunction,
                                                            void *callbackData,
                                                            int enableCallbacks,
                                                            int *callbackId);

HRESULT CVIFUNC WMPLib__WMPCoreEventsRegOnPlaylistChange (CAObjHandle serverObject,
                                                          _WMPCoreEventsRegOnPlaylistChange_CallbackType callbackFunction,
                                                          void *callbackData,
                                                          int enableCallbacks,
                                                          int *callbackId);

HRESULT CVIFUNC WMPLib__WMPCoreEventsRegOnCurrentPlaylistChange (CAObjHandle serverObject,
                                                                 _WMPCoreEventsRegOnCurrentPlaylistChange_CallbackType callbackFunction,
                                                                 void *callbackData,
                                                                 int enableCallbacks,
                                                                 int *callbackId);

HRESULT CVIFUNC WMPLib__WMPCoreEventsRegOnCurrentPlaylistItemAvailable (CAObjHandle serverObject,
                                                                        _WMPCoreEventsRegOnCurrentPlaylistItemAvailable_CallbackType callbackFunction,
                                                                        void *callbackData,
                                                                        int enableCallbacks,
                                                                        int *callbackId);

HRESULT CVIFUNC WMPLib__WMPCoreEventsRegOnMediaChange (CAObjHandle serverObject,
                                                       _WMPCoreEventsRegOnMediaChange_CallbackType callbackFunction,
                                                       void *callbackData,
                                                       int enableCallbacks,
                                                       int *callbackId);

HRESULT CVIFUNC WMPLib__WMPCoreEventsRegOnCurrentMediaItemAvailable (CAObjHandle serverObject,
                                                                     _WMPCoreEventsRegOnCurrentMediaItemAvailable_CallbackType callbackFunction,
                                                                     void *callbackData,
                                                                     int enableCallbacks,
                                                                     int *callbackId);

HRESULT CVIFUNC WMPLib__WMPCoreEventsRegOnCurrentItemChange (CAObjHandle serverObject,
                                                             _WMPCoreEventsRegOnCurrentItemChange_CallbackType callbackFunction,
                                                             void *callbackData,
                                                             int enableCallbacks,
                                                             int *callbackId);

HRESULT CVIFUNC WMPLib__WMPCoreEventsRegOnMediaCollectionChange (CAObjHandle serverObject,
                                                                 _WMPCoreEventsRegOnMediaCollectionChange_CallbackType callbackFunction,
                                                                 void *callbackData,
                                                                 int enableCallbacks,
                                                                 int *callbackId);

HRESULT CVIFUNC WMPLib__WMPCoreEventsRegOnMediaCollectionAttributeStringAdded (CAObjHandle serverObject,
                                                                               _WMPCoreEventsRegOnMediaCollectionAttributeStringAdded_CallbackType callbackFunction,
                                                                               void *callbackData,
                                                                               int enableCallbacks,
                                                                               int *callbackId);

HRESULT CVIFUNC WMPLib__WMPCoreEventsRegOnMediaCollectionAttributeStringRemoved (CAObjHandle serverObject,
                                                                                 _WMPCoreEventsRegOnMediaCollectionAttributeStringRemoved_CallbackType callbackFunction,
                                                                                 void *callbackData,
                                                                                 int enableCallbacks,
                                                                                 int *callbackId);

HRESULT CVIFUNC WMPLib__WMPCoreEventsRegOnMediaCollectionAttributeStringChanged (CAObjHandle serverObject,
                                                                                 _WMPCoreEventsRegOnMediaCollectionAttributeStringChanged_CallbackType callbackFunction,
                                                                                 void *callbackData,
                                                                                 int enableCallbacks,
                                                                                 int *callbackId);

HRESULT CVIFUNC WMPLib__WMPCoreEventsRegOnPlaylistCollectionChange (CAObjHandle serverObject,
                                                                    _WMPCoreEventsRegOnPlaylistCollectionChange_CallbackType callbackFunction,
                                                                    void *callbackData,
                                                                    int enableCallbacks,
                                                                    int *callbackId);

HRESULT CVIFUNC WMPLib__WMPCoreEventsRegOnPlaylistCollectionPlaylistAdded (CAObjHandle serverObject,
                                                                           _WMPCoreEventsRegOnPlaylistCollectionPlaylistAdded_CallbackType callbackFunction,
                                                                           void *callbackData,
                                                                           int enableCallbacks,
                                                                           int *callbackId);

HRESULT CVIFUNC WMPLib__WMPCoreEventsRegOnPlaylistCollectionPlaylistRemoved (CAObjHandle serverObject,
                                                                             _WMPCoreEventsRegOnPlaylistCollectionPlaylistRemoved_CallbackType callbackFunction,
                                                                             void *callbackData,
                                                                             int enableCallbacks,
                                                                             int *callbackId);

HRESULT CVIFUNC WMPLib__WMPCoreEventsRegOnPlaylistCollectionPlaylistSetAsDeleted (CAObjHandle serverObject,
                                                                                  _WMPCoreEventsRegOnPlaylistCollectionPlaylistSetAsDeleted_CallbackType callbackFunction,
                                                                                  void *callbackData,
                                                                                  int enableCallbacks,
                                                                                  int *callbackId);

HRESULT CVIFUNC WMPLib__WMPCoreEventsRegOnModeChange (CAObjHandle serverObject,
                                                      _WMPCoreEventsRegOnModeChange_CallbackType callbackFunction,
                                                      void *callbackData,
                                                      int enableCallbacks,
                                                      int *callbackId);

HRESULT CVIFUNC WMPLib__WMPCoreEventsRegOnMediaError (CAObjHandle serverObject,
                                                      _WMPCoreEventsRegOnMediaError_CallbackType callbackFunction,
                                                      void *callbackData,
                                                      int enableCallbacks,
                                                      int *callbackId);

HRESULT CVIFUNC WMPLib__WMPCoreEventsRegOnOpenPlaylistSwitch (CAObjHandle serverObject,
                                                              _WMPCoreEventsRegOnOpenPlaylistSwitch_CallbackType callbackFunction,
                                                              void *callbackData,
                                                              int enableCallbacks,
                                                              int *callbackId);

HRESULT CVIFUNC WMPLib__WMPCoreEventsRegOnDomainChange (CAObjHandle serverObject,
                                                        _WMPCoreEventsRegOnDomainChange_CallbackType callbackFunction,
                                                        void *callbackData,
                                                        int enableCallbacks,
                                                        int *callbackId);

HRESULT CVIFUNC WMPLib__WMPCoreEventsRegOnStringCollectionChange (CAObjHandle serverObject,
                                                                  _WMPCoreEventsRegOnStringCollectionChange_CallbackType callbackFunction,
                                                                  void *callbackData,
                                                                  int enableCallbacks,
                                                                  int *callbackId);

HRESULT CVIFUNC WMPLib__WMPCoreEventsRegOnMediaCollectionMediaAdded (CAObjHandle serverObject,
                                                                     _WMPCoreEventsRegOnMediaCollectionMediaAdded_CallbackType callbackFunction,
                                                                     void *callbackData,
                                                                     int enableCallbacks,
                                                                     int *callbackId);

HRESULT CVIFUNC WMPLib__WMPCoreEventsRegOnMediaCollectionMediaRemoved (CAObjHandle serverObject,
                                                                       _WMPCoreEventsRegOnMediaCollectionMediaRemoved_CallbackType callbackFunction,
                                                                       void *callbackData,
                                                                       int enableCallbacks,
                                                                       int *callbackId);

#ifdef __cplusplus
    }
#endif
#endif /* _WMPLIB_H */