@interface IMSyndicationStatusChatItem : IMMessageStatusChatItem
@property (nonatomic) q syndicationStatus;
@property (nonatomic) BOOL wasDetectedAsSWYSpam;
@property (nonatomic) NSString swyAppName;
@property (nonatomic) NSString swyBundleID;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (long long)syndicationStatus;
- (BOOL)wasDetectedAsSWYSpam;
- (id)swyAppName;
- (id)swyBundleID;
- (id)_initWithItem:withSyndicationStatus:;
@end
