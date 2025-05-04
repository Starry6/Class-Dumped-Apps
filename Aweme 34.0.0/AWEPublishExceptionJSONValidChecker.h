@interface AWEPublishExceptionJSONValidChecker : NSObject
@property (nonatomic) AWEVideoPublishViewModel publishModel;
@property (nonatomic) AWEPublishExceptionJSONValidContext jsonValidContext;
@property (nonatomic) BOOL isKeyNotString;
@property (nonatomic) NSMutableArray invalidKeyArray;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)publishModel;
- (void)setPublishModel:;
- (void)checkWithPublishModel:context:completion:;
- (id)reportCustomParams;
- (void)setJsonValidContext:;
- (id)jsonValidContext;
- (id)invalidKeyArray;
- (void)setIsKeyNotString:;
- (BOOL)isKeyNotString;
- (void)setInvalidKeyArray:;
- (void).cxx_destruct;
@end
