@interface BPSCountWindowMetadata : NSObject
@property (nonatomic) Q currentCount;
- (unsigned long long)currentCount;
- (id)init;
- (id)initWithCurrentCount:;
+ (id)new;
@end
