@interface FPImportProgressReport : NSObject
@property (nonatomic) q status;
@property (nonatomic) q numberOfItemsInError;
@property (nonatomic) NSArray errorDetails;
@property (nonatomic) NSDictionary json;
- (id)json;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (long long)status;
- (id)initWithStatus:numberOfItemsInError:errorDetails:;
- (long long)numberOfItemsInError;
- (id)errorDetails;
+ (BOOL)supportsSecureCoding;
@end
