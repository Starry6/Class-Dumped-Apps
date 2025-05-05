@interface BWFormat : NSObject
@property (nonatomic) I mediaType;
@property (nonatomic) ^{opaqueCMFormatDescription=} formatDescription;
- (unsigned int)mediaType;
- (id)formatDescription;
+ (id)formatByResolvingRequirements:printErrors:;
+ (id)formatByResolvingRequirements:;
@end
