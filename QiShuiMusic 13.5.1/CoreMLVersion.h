@interface CoreMLVersion : NSObject
@property (nonatomic) NSNumber frameworkVersionNumber;
- (id)init;
- (void).cxx_destruct;
- (id)frameworkVersionNumber;
- (void)setFrameworkVersionNumber:;
+ (id)getInternalFrameworkVersion;
@end
