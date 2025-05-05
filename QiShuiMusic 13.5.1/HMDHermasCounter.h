@interface HMDHermasCounter : NSObject
@property (nonatomic) NSDictionary classMap;
@property (nonatomic) NSDictionary moduleNameMap;
- (unsigned long long)generateSequenceCode:;
- (unsigned long long)generateSequenceCodeWithIndex:;
- (id)initializeMMappFile;
- (id)moduleNameMap;
- (void)resetSequenceCode;
- (void)setModuleNameMap:;
- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void).cxx_destruct;
- (id)classMap;
- (void)setClassMap:;
+ (id)shared;
@end
