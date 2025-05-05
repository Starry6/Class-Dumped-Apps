@interface BDTGHttpRequest : NSObject
@property (nonatomic) NSURL URL;
@property (nonatomic) NSMutableDictionary mutableHTTPHeaderFields;
@property (nonatomic) NSDictionary allHTTPHeaderFields;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)mutableHTTPHeaderFields;
- (void)setMutableHTTPHeaderFields:;
- (id)init;
- (void)setValue:forHTTPHeaderField:;
- (void).cxx_destruct;
- (void)setURL:;
- (id)URL;
- (id)allHTTPHeaderFields;
@end
