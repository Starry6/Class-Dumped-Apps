@interface CNAbstractActivityAlertDescription : CNPropertyDescription
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (Class)valueClass;
- (BOOL)canUnifyValue:withValue:;
- (id)CNValueFromABValue:;
- (id)ABValueFromCNValue:;
- (id)CNMutableValueForABMultivalue;
@end
