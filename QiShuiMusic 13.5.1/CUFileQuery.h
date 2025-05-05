@interface CUFileQuery : NSObject
@property (nonatomic) @? completionHandler;
@property (nonatomic) NSString path;
- (id)path;
- (id)initWithDictionary:error:;
- (void)setPath:;
- (void)setCompletionHandler:;
- (void).cxx_destruct;
- (id)description;
- (id)completionHandler;
- (void)encodeWithDictionary:;
@end
