@interface VMUMutableClassInfo : VMUClassInfo
@property (nonatomic) VMUClassInfo superclassInfo;
@property (nonatomic) NSString displayName;
@property (nonatomic) NSString binaryPath;
@property (nonatomic) BOOL isCoreMediaFigObject;
@property (nonatomic) I defaultScanType;
@property (nonatomic) I instanceSize;
@property (nonatomic) BOOL isRootClass;
@property (nonatomic) I infoType;
- (void)addFields:;
- (void)setFields:;
- (void)addComplexAction:withEvaluator:;
- (void)addVariantRecursively:forField:withEvaluator:;
- (void)setIsCoreMediaFigObject:;
- (void)setIsRootClass:;
- (void)addVariant:forField:withEvaluator:;
- (void)setDisplayName:;
- (void)mutateTypeFieldsWithBlock:;
- (void)setInfoType:;
- (void)replaceFieldRecursively:withField:;
- (void)setInstanceSize:;
- (void)setSuperclassInfo:;
- (void)mutateTypeFieldsRecursivelyWithBlock:;
- (void)replaceField:withFields:;
- (void)setDefaultScanType:;
- (void)setVariantScanType:withEvaluator:;
- (void)setBinaryPath:;
@end
