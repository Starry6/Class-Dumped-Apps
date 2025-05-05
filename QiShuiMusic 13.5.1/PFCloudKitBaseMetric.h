@interface PFCloudKitBaseMetric : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSDictionary payload;
- (id)payload;
- (void)dealloc;
- (id)initWithContainerIdentifier:;
- (id)description;
- (id)name;
@end
