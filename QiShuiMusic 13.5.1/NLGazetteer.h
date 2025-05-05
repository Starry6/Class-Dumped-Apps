@interface NLGazetteer : NSObject
@property (nonatomic) NSString language;
@property (nonatomic) NSData data;
- (id)initWithData:error:;
- (void)dealloc;
- (id)language;
- (id)data;
- (id)initWithMLModel:error:;
- (id)labels;
- (id)modelDescription;
- (void).cxx_destruct;
- (id)initWithNLModel:error:;
- (id)initWithContentsOfURL:error:;
- (id)_gazetteerRef;
- (id)initWithDictionary:language:error:;
- (id)labelForString:;
- (BOOL)writeMLModelToURL:options:error:;
- (void)_addImplementationToArray:;
+ (id)gazetteerWithContentsOfURL:error:;
+ (id)gazetteerWithData:error:;
+ (id)gazetteerWithMLModel:error:;
+ (BOOL)writeGazetteerForDictionary:language:toURL:error:;
+ (BOOL)writeGazetteerMLModelForDictionary:language:toURL:options:error:;
@end
