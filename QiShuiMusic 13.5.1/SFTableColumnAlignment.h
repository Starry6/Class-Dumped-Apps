@interface SFTableColumnAlignment : NSObject
@property (nonatomic) NSInteger columnAlignment;
@property (nonatomic) NSInteger dataAlignment;
@property (nonatomic) BOOL isEqualWidth;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSData jsonData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithProtobuf:;
- (id)initWithCoder:;
- (id)jsonData;
- (void)encodeWithCoder:;
- (id)dictionaryRepresentation;
- (id)copyWithZone:;
- (void)setDataAlignment:;
- (void)setColumnAlignment:;
- (void)setIsEqualWidth:;
- (int)columnAlignment;
- (int)dataAlignment;
- (BOOL)isEqualWidth;
- (BOOL)hasColumnAlignment;
- (BOOL)hasDataAlignment;
- (BOOL)hasIsEqualWidth;
+ (BOOL)supportsSecureCoding;
@end
