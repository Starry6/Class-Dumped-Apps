@interface EAEmailAddressParser : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)log;
+ (id)rawAddressFromFullAddress:;
+ (id)rawAddressFromFullAddress:cacheResults:;
+ (id)rawAddressRespectingGroupsFromFullAddress:;
+ (BOOL)isLegalEmailAddress:;
+ (id)rangeOfAddressDomainFromAddress:;
+ (void)_componentsForFullAddress:rawAddressIndexes:localPartIndexes:domainIndexes:;
+ (id)idnaDecodedAddressForAddress:;
+ (id)_stringByDecodingIDNAString:inRange:;
+ (BOOL)addressIsEmptyGroup:;
+ (id)addressDomainFromAddress:;
+ (void)insertPreviousRoute:ofLength:toBuffer:ofLength:atPosition:addSpace:;
+ (id)_stringByEncodingIDNAString:inRange:;
+ (id)displayNameFromAddress:cacheResults:;
+ (id)displayNameFromAddress:;
+ (id)localPartFromAddress:;
+ (id)idnaEncodedAddressForAddress:;
@end
