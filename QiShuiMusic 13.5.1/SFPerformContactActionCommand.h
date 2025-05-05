@interface SFPerformContactActionCommand : SFCommand
@property (nonatomic) NSInteger contactActionType;
@property (nonatomic) BOOL didDisplayHandleOptions;
@property (nonatomic) BOOL didSelectFromOptionsMenu;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSData jsonData;
@property (nonatomic) NSString commandDetail;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (int)_cpCommandType;
- (id)initWithProtobuf:;
- (id)initWithCoder:;
- (id)jsonData;
- (void)encodeWithCoder:;
- (id)dictionaryRepresentation;
- (id)copyWithZone:;
- (int)contactActionType;
- (void)setContactActionType:;
- (BOOL)didDisplayHandleOptions;
- (void)setDidDisplayHandleOptions:;
- (BOOL)didSelectFromOptionsMenu;
- (void)setDidSelectFromOptionsMenu:;
- (BOOL)hasContactActionType;
- (BOOL)hasDidDisplayHandleOptions;
- (BOOL)hasDidSelectFromOptionsMenu;
+ (BOOL)supportsSecureCoding;
@end
