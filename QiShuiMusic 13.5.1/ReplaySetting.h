@interface ReplaySetting : IESLivePBBaseMessage
@property (nonatomic) BOOL replayEnabled;
@property (nonatomic) BOOL replayAutoPost;
@property (nonatomic) BOOL replaySyncXitou;
@property (nonatomic) BOOL replaySyncProduct;
+ (id)descriptor;
@end
