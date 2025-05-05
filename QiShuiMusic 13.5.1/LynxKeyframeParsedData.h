@interface LynxKeyframeParsedData : NSObject
@property (nonatomic) NSMutableDictionary keyframeValues;
@property (nonatomic) NSMutableDictionary keyframeTimes;
@property (nonatomic) NSMutableDictionary beginStyles;
@property (nonatomic) NSMutableDictionary endStyles;
@property (nonatomic) BOOL isPercentTransform;
- (void)setBeginStyles:;
- (id)beginStyles;
- (id)endStyles;
- (BOOL)isPercentTransform;
- (id)keyframeTimes;
- (id)keyframeValues;
- (void)setEndStyles:;
- (void)setIsPercentTransform:;
- (void)setKeyframeTimes:;
- (void)setKeyframeValues:;
- (id)init;
- (void).cxx_destruct;
@end
