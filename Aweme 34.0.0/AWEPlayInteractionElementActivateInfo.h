@interface AWEPlayInteractionElementActivateInfo : NSObject
@property (nonatomic) Q type;
- (BOOL)shouldProcessAppear;
- (unsigned long long)type;
- (void)setType:;
+ (id)activeInfo;
+ (id)delayUpdatedInfo;
@end
