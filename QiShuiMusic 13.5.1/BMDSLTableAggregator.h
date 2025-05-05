@interface BMDSLTableAggregator : BMDSLAggregator
@property (nonatomic) NSArray transforms;
@property (nonatomic) NSArray classNames;
@property (nonatomic) NSArray classKeyPaths;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)transforms;
- (id)initWithTableTransforms:classNames:classKeyPaths:name:version:;
- (id)initWithTableTransforms:classNames:;
- (id)initWithTableTransforms:classNames:classKeyPaths:;
- (id)bpsAggregator;
- (void)setTransforms:;
- (id)classNames;
- (id)classKeyPaths;
+ (BOOL)supportsSecureCoding;
@end
