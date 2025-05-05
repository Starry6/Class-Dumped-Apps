@interface BPSZipMany : BPSPublisher
@property (nonatomic) NSArray publishers;
- (id)init;
- (id)publishers;
- (void)subscribe:;
- (id)initWithPublishers:;
- (void).cxx_destruct;
+ (id)new;
@end
