@interface AWEIMUrgeGenerateContentMessageViewModel : AWEIMMessageViewModel
@property (nonatomic) BOOL hasTrackDataForEntryShow;
- (void)trackShowEvent;
- (void)setupWithMessage:;
- (void)checkDeleteMessage:;
- (BOOL)hasTrackDataForEntryShow;
- (void)setHasTrackDataForEntryShow:;
- (unsigned long long)hash;
- (BOOL)isEqual:;
+ (void)checkDeleteMessage:;
@end
