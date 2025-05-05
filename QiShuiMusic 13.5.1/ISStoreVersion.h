@interface ISStoreVersion : NSObject
@property (nonatomic) NSURL redirectURL;
- (id)redirectURL;
- (void)dealloc;
- (void)setRedirectURL:;
- (id)initWithDictionary:;
@end
