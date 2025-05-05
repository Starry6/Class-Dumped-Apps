@interface MKMultiPartAttributedString : NSObject
@property (nonatomic) NSArray components;
@property (nonatomic) NSArray separators;
@property (nonatomic) NSAttributedString attributedString;
- (id)components;
- (id)attributedString;
- (unsigned long long)hash;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)separators;
- (id)initWithComponents:separators:;
+ (id)multiPartAttributedStringWithComponents:repeatedSeparator:;
+ (id)multiPartAttributedStringWithString:;
+ (id)_mapkit_multiPartAttributedStringForServerFormattedString:defaultAttributes:;
@end
