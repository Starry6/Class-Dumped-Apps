@interface INWorkoutAssociatedItem : NSObject
@property (nonatomic) q itemLabel;
@property (nonatomic) NSString itemID;
@property (nonatomic) q contentRating;
@property (nonatomic) INSpeakableString itemName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_dictionaryRepresentation;
- (id)itemID;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)descriptionAtIndent:;
- (id)itemName;
- (void).cxx_destruct;
- (id)description;
- (id)_intents_encodeWithJSONEncoder:codableDescription:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithItemLabel:itemID:contentRating:itemName:;
- (long long)itemLabel;
- (long long)contentRating;
+ (id)_intents_decodeWithJSONDecoder:codableDescription:from:;
+ (BOOL)supportsSecureCoding;
@end
