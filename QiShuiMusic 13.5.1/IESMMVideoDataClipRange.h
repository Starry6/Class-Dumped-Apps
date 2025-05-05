@interface IESMMVideoDataClipRange : NSObject
@property (nonatomic) double startSeconds;
@property (nonatomic) double durationSeconds;
@property (nonatomic) double attachSeconds;
@property (nonatomic) q repeatCount;
@property (nonatomic) BOOL isDisable;
- (double)attachSeconds;
- (BOOL)isDisable;
- (void)setAttachSeconds:;
- (void)setIsDisable:;
- (void)setStartSeconds:;
- (long long)repeatCount;
- (void)setRepeatCount:;
- (double)durationSeconds;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (id)copyWithZone:;
- (double)startSeconds;
- (double)endSeconds;
- (void)setDurationSeconds:;
@end
