@interface SASymbol : NSObject
@property (nonatomic) Q offsetIntoSegment;
@property (nonatomic) Q length;
@property (nonatomic) NSString name;
@property (nonatomic) Q offsetIntoTextSegment;
- (unsigned long long)offsetIntoTextSegment;
- (unsigned long long)offsetIntoSegment;
- (id)debugDescription;
- (void).cxx_destruct;
- (unsigned long long)length;
- (id)name;
@end
