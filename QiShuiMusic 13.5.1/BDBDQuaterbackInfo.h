@interface BDBDQuaterbackInfo : NSObject
@property (nonatomic) NSString path;
@property (nonatomic) NSString name;
@property (nonatomic) NSInteger version;
@property (nonatomic) BOOL async;
@property (nonatomic) NSString moduleId;
@property (nonatomic) BOOL skipsFileNameValidation;
- (id)moduleId;
- (void)setModuleId:;
- (void)setSkipsFileNameValidation:;
- (BOOL)skipsFileNameValidation;
- (id)path;
- (id)init;
- (void)setName:;
- (void)setVersion:;
- (int)version;
- (void)setPath:;
- (void).cxx_destruct;
- (id)name;
- (BOOL)async;
- (void)setAsync:;
@end
