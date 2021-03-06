/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGUnrecognizedContactKey : NSObject <SGEntityKey> {
    SGIdentityKey * _identityKey;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) SGIdentityKey *identityKey;
@property (readonly) Class superclass;

+ (BOOL)isSupportedEntityType:(long long)arg1;

- (void).cxx_destruct;
- (id)description;
- (unsigned int)hash;
- (id)identityKey;
- (id)init;
- (id)initWithEmail:(id)arg1;
- (id)initWithIdentityKey:(id)arg1;
- (id)initWithNormalizedEmail:(id)arg1;
- (id)initWithNormalizedPhone:(id)arg1;
- (id)initWithSerialized:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToUnrecognizedContactKey:(id)arg1;
- (id)serialize;

@end
