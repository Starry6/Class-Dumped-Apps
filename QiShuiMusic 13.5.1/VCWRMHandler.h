@interface VCWRMHandler : NSObject
@property (nonatomic) NSInteger localWRMLinkTypeSuggestion;
@property (nonatomic) NSInteger remoteWRMLinkTypeSuggestion;
@property (nonatomic) BOOL isRemoteDuplicating;
@property (nonatomic) double localLinkTypeSuggestionChangeTime;
- (id)init;
- (BOOL)shouldForceWRMRecommendationUsingUserDefaults;
- (BOOL)shouldRequestWRMNotificationWithDuplicationReason:isDuplicationEnabled:isLocalUsingCellular:atTime:;
- (void)updateWRMNotificationRequestTime:;
- (unsigned char)processLocalWRMNotification:isAudioOnly:;
- (unsigned char)processRemoteWRMSuggestion:isRemoteDuplicating:;
- (int)localWRMLinkTypeSuggestion;
- (int)remoteWRMLinkTypeSuggestion;
- (BOOL)isRemoteDuplicating;
- (double)localLinkTypeSuggestionChangeTime;
- (void)setLocalLinkTypeSuggestionChangeTime:;
@end
