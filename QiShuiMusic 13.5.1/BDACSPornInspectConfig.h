@interface BDACSPornInspectConfig : NSObject
@property (nonatomic) BOOL enable;
@property (nonatomic) double threshold;
@property (nonatomic) NSArray contentType;
@property (nonatomic) NSString bussinessID;
@property (nonatomic) NSString BASE64Script;
- (id)BASE64Script;
- (id)bussinessID;
- (double)threshold;
- (BOOL)enable;
- (id)contentType;
- (id)initWithDictionary:;
- (void).cxx_destruct;
@end
