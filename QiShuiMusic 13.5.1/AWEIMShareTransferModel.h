@interface AWEIMShareTransferModel : NSObject
@property (nonatomic) AWEShareContext context;
@property (nonatomic) BOOL authorShareNotPublicAweme;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) NSString multiSelectedItems;
@property (nonatomic) NSString replayContent;
@property (nonatomic) @? completion;
@property (nonatomic) BOOL isLandscape;
- (void)setEnterMethod:;
- (BOOL)authorShareNotPublicAweme;
- (id)enterMethod;
- (id)multiSelectedItems;
- (id)replayContent;
- (void)setAuthorShareNotPublicAweme:;
- (void)setMultiSelectedItems:;
- (void)setReplayContent:;
- (id)completion;
- (void)setCompletion:;
- (id)context;
- (BOOL)isLandscape;
- (void)setIsLandscape:;
- (void).cxx_destruct;
- (void)setContext:;
@end
