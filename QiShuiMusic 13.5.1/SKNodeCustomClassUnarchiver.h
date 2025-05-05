@interface SKNodeCustomClassUnarchiver : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void).cxx_destruct;
- (Class)unarchiver:cannotDecodeObjectOfClassName:originalClasses:;
- (id)_currentAppModuleName;
- (id)_mangledSwiftClassName:moduleName:;
- (id)_findValidClassName:;
@end
