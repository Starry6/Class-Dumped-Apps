@interface IESInfoStickerAnimParam : NSObject
@property (nonatomic) NSInteger animType;
@property (nonatomic) NSString animPath;
@property (nonatomic) double animDuration;
@property (nonatomic) NSString animPropertyKey;
@property (nonatomic) NSString animPropertyVal;
- (id)animPropertyKey;
- (id)animPropertyVal;
- (double)animDuration;
- (id)animPath;
- (int)animType;
- (void)setAnimDuration:;
- (void)setAnimPath:;
- (void)setAnimPropertyKey:;
- (void)setAnimPropertyVal:;
- (void)setAnimType:;
- (id)toDicParam;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:;
+ (id)stickerAnimParamWithDic:;
@end
