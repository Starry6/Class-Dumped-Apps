@interface IESLiveSaaSToolbarRedDotItem : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString identifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)convertIdentifierToRedDotKey;
- (id)guideDotWithInteractItem;
- (id)identifier;
- (id)initWithTitle:identifier:;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
- (void)setIdentifier:;
@end
