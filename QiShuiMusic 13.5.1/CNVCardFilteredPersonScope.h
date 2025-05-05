@interface CNVCardFilteredPersonScope : NSObject
@property (nonatomic) NSSet excludedFields;
@property (nonatomic) Q filterOptions;
@property (nonatomic) BOOL empty;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (unsigned long long)filterOptions;
- (id)initWithExcludedFields:options:;
- (id)excludedFields;
@end
