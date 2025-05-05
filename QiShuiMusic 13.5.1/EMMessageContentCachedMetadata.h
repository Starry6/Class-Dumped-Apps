@interface EMMessageContentCachedMetadata : NSObject
@property (nonatomic) BOOL showRemoteImages;
@property (nonatomic) BOOL skipMessageReformatting;
- (void).cxx_destruct;
- (id)initWithDelegate:;
- (BOOL)showRemoteImages;
- (void)setShowRemoteImages:;
- (BOOL)skipMessageReformatting;
- (void)setSkipMessageReformatting:;
@end
