@interface AWEIMSwipeFillOptions : NSObject
@property (nonatomic) q autoFulFillmentStyle;
@property (nonatomic) q timing;
- (long long)autoFulFillmentStyle;
- (void)setAutoFulFillmentStyle:;
- (long long)timing;
- (void)setTiming:;
+ (id)automaticWithStyle:timing:;
+ (id)manualWithTiming:;
@end
