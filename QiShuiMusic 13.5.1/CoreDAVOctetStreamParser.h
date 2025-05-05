@interface CoreDAVOctetStreamParser : NSObject
@property (nonatomic) NSMutableData octetStreamData;
@property (nonatomic) NSError parserError;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)parserError;
- (BOOL)processData:forTask:;
- (void).cxx_destruct;
- (id)description;
- (id)octetStreamData;
- (void)setOctetStreamData:;
+ (BOOL)canHandleContentType:;
@end
