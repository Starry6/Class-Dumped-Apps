@interface AXCategoricalDataAxisDescriptor : NSObject
@property (nonatomic) NSArray categoryOrder;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString title;
@property (nonatomic) NSAttributedString attributedTitle;
- (id)attributedTitle;
- (id)initWithDictionary:;
- (void)setTitle:;
- (void)setAttributedTitle:;
- (id)title;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (id)copyWithZone:;
- (id)initWithTitle:categoryOrder:;
- (id)initWithAttributedTitle:categoryOrder:;
- (id)categoryOrder;
- (void)setCategoryOrder:;
@end
