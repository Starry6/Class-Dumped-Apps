@interface MGIOKitHelper : NSObject
- (id)init;
- (void)dealloc;
- (void)deleteIterator;
- (BOOL)createTreeIterator:;
- (BOOL)createServicesIteratorByNameMatch:;
- (unsigned int)copyDeviceTreeStructureNext:withFirstChar:;
- (id)copyServiceTreeProperty:withFirstChar:propertyName:withPropertyFirstChar:;
- (id)deviceTreeNodeIsPresent:withExactName:withNodeClass:;
- (id)copyDeviceTreeProperty:withFirstChar:propertyName:withPropertyFirstChar:;
- (id)copyNumberFromData:;
- (id)copyNumberFromDeviceTree:withFirstChar:propertyName:withPropertyFirstChar:;
- (id)copyStringFromDeviceTree:withFirstChar:propertyName:withPropertyFirstChar:;
- (id)copyStringFromServiceTree:withFirstChar:propertyName:withPropertyFirstChar:;
- (id)copyPropertyFromServiceTree:withFirstChar:propertyName:withPropertyFirstChar:;
- (id)copyDataFromServiceTree:withFirstChar:propertyName:withPropertyFirstChar:;
- (id)copyDataFromDeviceTree:withFirstChar:propertyName:withPropertyFirstChar:;
- (id)copyBooleanFromServiceTree:withFirstChar:propertyName:withPropertyFirstChar:;
- (id)iteratorCopyBusyServiceNames;
@end
