@interface CoreDAVNullParser : NSObject
@property (nonatomic) NSError parserError;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)parserError;
- (BOOL)processData:forTask:;
- (void).cxx_destruct;
+ (BOOL)canHandleContentType:;
@end
