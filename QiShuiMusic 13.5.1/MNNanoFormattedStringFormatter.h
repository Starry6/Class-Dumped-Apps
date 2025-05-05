@interface MNNanoFormattedStringFormatter : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)signInstructionsForStep:;
- (id)listInstructionForStep:;
+ (id)sharedFormatter;
@end
