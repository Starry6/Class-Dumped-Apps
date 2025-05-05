@interface PHPhotoLibraryAppPrivateData : NSObject
@property (nonatomic) PLAppPrivateData impl;
@property (nonatomic) PHPhotoLibrary photoLibrary;
- (id)photoLibrary;
- (id)valueForKey:;
- (void)setValue:forKey:;
- (id)valueForKeyPath:;
- (void)setPhotoLibrary:;
- (id)initWithLibrary:;
- (id)debugDescription;
- (void)setValue:forKeyPath:;
- (void).cxx_destruct;
- (id)impl;
- (BOOL)setValue:forKey:error:;
- (void)setImpl:;
- (void)invalidate;
- (id)dictionaryWithValuesForKeys:;
- (void)setValuesForKeysWithDictionary:;
- (BOOL)setValue:forKeyPath:error:;
- (BOOL)setValuesForKeysWithDictionary:error:;
+ (BOOL)accessInstanceVariablesDirectly;
@end
