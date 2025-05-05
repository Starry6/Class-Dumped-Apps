@interface IESMMCache : NSObject
@property (nonatomic) NSString reverseMD5;
@property (nonatomic) AVAsset reverseAsset;
@property (nonatomic) AVAsset reverseSrcAsset;
- (id)reverseSrcAsset;
- (void)clearReverse;
- (id)reverseAsset;
- (id)reverseMD5;
- (void)setReverseAsset:;
- (void)setReverseMD5:;
- (void)setReverseSrcAsset:;
- (id)init;
- (void).cxx_destruct;
+ (id)shareInstance;
@end
