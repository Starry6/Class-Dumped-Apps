@interface AWECommerceActivityTimeRange : MTLModel
@property (nonatomic) double start;
@property (nonatomic) double end;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setStart:;
- (void)setEnd:;
- (double)end;
- (double)start;
+ (id)JSONKeyPathsByPropertyKey;
@end
