@interface BDXViewLynxAdaptor : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)dictionaryFromGlobalProps:;
- (id)globalPropsFromDictionary:;
- (BOOL)isKitGlobalProps:;
- (id)seperateRenderLynxViewWithContext:;
@end
