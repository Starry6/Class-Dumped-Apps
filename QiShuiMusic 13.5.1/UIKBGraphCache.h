@interface UIKBGraphCache : NSObject
@property (nonatomic) NSMutableDictionary graphCache;
@property (nonatomic) UIScreen _intendedScreen;
@property (nonatomic) NSDictionary _options;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)_matchingOptions:;
- (id)_intendedScreen;
- (id)_options;
- (id)graphCache;
- (void).cxx_destruct;
- (id)_initWithScreen:options:;
+ (id)graphCacheForScreen:;
@end
