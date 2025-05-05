@interface MLCompilerResult : NSObject
@property (nonatomic) NSArray outputFiles;
- (id)outputFiles;
- (void).cxx_destruct;
- (void)setOutputFiles:;
+ (id)resultWithOutputFiles:;
+ (id)resultWithArchive:;
@end
