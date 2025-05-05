@interface AVAssetFragment : NSObject
@property (nonatomic) q sequenceNumber;
- (id)init;
- (void)dealloc;
- (long long)sequenceNumber;
- (id)initWithSequenceNumber:;
+ (id)fragmentWithSequenceNumber:;
@end
