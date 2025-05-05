@interface IESFalconFileInterceptor : NSObject
@property (nonatomic) NSMutableDictionary fileSearchPathPatternDictionary;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)registerPatterns:forSearchPath:;
- (id)fileSearchPathPatternDictionary;
- (id)_customPathsWithURLString:;
- (id)_customPathsWithURLString:ignorePrefix:searchPath:;
- (id)falconMetaDataForURLRequest:;
- (void)registerPattern:forSearchPath:;
- (void)setFileSearchPathPatternDictionary:;
- (void)unregisterPatterns:;
- (void).cxx_destruct;
@end
