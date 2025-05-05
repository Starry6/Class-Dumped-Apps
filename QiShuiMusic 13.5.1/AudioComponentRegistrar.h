@interface AudioComponentRegistrar : NSObject
@property (nonatomic) ^v impl;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)resumeListeners;
- (id)initForMode:;
- (BOOL)listener:shouldAcceptNewConnection:;
- (id)impl;
@end
