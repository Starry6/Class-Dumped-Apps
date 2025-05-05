@interface CNPostalAddressFormattingSpecification : NSObject
@property (nonatomic) NSDictionary fieldLabelMap;
@property (nonatomic) NSArray displayFieldArrangement;
@property (nonatomic) NSArray editingFieldArrangement;
- (void).cxx_destruct;
- (id)editingFieldArrangement;
- (id)localizedPlaceholderForKey:;
- (id)initWithDisplayFieldArrangement:editingFieldArrangement:fieldLabelMap:;
- (id)displayFieldArrangement;
- (id)fieldLabelMap;
@end
