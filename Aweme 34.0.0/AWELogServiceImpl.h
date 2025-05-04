@interface AWELogServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)logStringWithLevel:module:subModule:fileName:lineNumber:funcName:message:;
- (void)logStringWithLevel:module:subModule:fileName:lineNumber:funcName:message:instanceName:;
- (void)logHugeStringWithLevel:module:subModule:fileName:lineNumber:funcName:message:;
- (void)logImportantStringWithLevel:module:subModule:fileName:lineNumber:funcName:message:;
- (void)logHugeStringWithLevel:module:subModule:fileName:lineNumber:funcName:message:instanceName:;
+ (id)sharedInstance;
@end
