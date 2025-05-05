@interface CUINamedData : CUINamedLookup
@property (nonatomic) NSString utiType;
@property (nonatomic) NSData data;
- (id)data;
- (id)utiType;
- (id)description;
- (id)initWithName:usingRenditionKey:fromTheme:;
@end
