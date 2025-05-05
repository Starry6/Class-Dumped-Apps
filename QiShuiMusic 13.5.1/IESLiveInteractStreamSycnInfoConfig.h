@interface IESLiveInteractStreamSycnInfoConfig : NSObject
@property (nonatomic) q streamIndex;
@property (nonatomic) NSInteger repeatCount;
@property (nonatomic) q streamType;
- (id)initWithStreamIndex:repeatCount:streamType:;
- (int)repeatCount;
- (void)setRepeatCount:;
- (long long)streamType;
- (void)setStreamType:;
- (long long)streamIndex;
- (void)setStreamIndex:;
@end
