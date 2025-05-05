@interface LynxBorderRadiusImageProcessor : NSObject
@property (nonatomic) LynxUIImageDrawParameter param;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithDrawParameter:;
- (id)processImage:;
- (id)cacheKey;
- (id)param;
- (void)setParam:;
- (void).cxx_destruct;
@end
